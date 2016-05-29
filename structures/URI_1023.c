#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int city_counter = 0;

struct consumption_info {
    int average_consumption;
    int number_of_people;
    struct consumption_info *next_consumption_info;
};

struct town {
    int sum_of_people;
    int sum_of_consumption;
    struct consumption_info *first_consumption_info;
};

float div_two_digits_precision(int a, int b) {
    float res = (float)a/b;
    float promote = floor(res*100)/100;
    return promote;
}

int has_next(struct consumption_info *info) {
    return info->next_consumption_info != NULL;
}

struct town * init_town() {
    struct town *this_town;
    this_town = (struct town *) malloc( sizeof(struct town) );
    this_town->sum_of_people = 0;
    this_town->sum_of_consumption = 0;
    this_town->first_consumption_info = NULL;
    return this_town;
}

void insert_town_info(struct town *town, struct consumption_info *info) {
    // empty list, don't even check
    if (town->first_consumption_info == NULL) {
        town->first_consumption_info = info;
    } else {
        struct consumption_info *walk_info = town->first_consumption_info;
        for(;;) {
            // if current is equal, add to statistic, not to the list
            if (walk_info->average_consumption == info->average_consumption) {
                walk_info->number_of_people = walk_info->number_of_people + info->number_of_people;

                free(info);
                info = NULL;
                return;
            } else if (walk_info->average_consumption > info->average_consumption) {
                // points inserted node to current node
                info->next_consumption_info = walk_info;
                // points first info to inserted node
                town->first_consumption_info = info;
                return;
            } else if (!has_next(walk_info) || walk_info->next_consumption_info->average_consumption > info->average_consumption) {
                // if there's no next node OR next node is greater.
                struct consumption_info *next_node;
                next_node = walk_info->next_consumption_info;
                walk_info->next_consumption_info = info;
                info->next_consumption_info = next_node;
                return;
            } else {
                walk_info = walk_info->next_consumption_info;
            }
        }

    }
}

void run_test_case(int amount_of_properties) {
    printf("Cidade# %d:\n", ++city_counter);

    struct town *this_town = init_town();

    int i;
    for (i = 0; i < amount_of_properties; ++i) {
        // ask user the needed info
        int residents;
        int consumption;
        scanf("%d %d", &residents, &consumption);

        // initialize a new consumption_info
        struct consumption_info *info;
        info = (struct consumption_info *) malloc( sizeof(struct consumption_info) );

        info->next_consumption_info = NULL;
        info->average_consumption = floor((float)consumption/residents);
        info->number_of_people = residents;

        // add counters to the total
        this_town->sum_of_people = this_town->sum_of_people + residents;
        this_town->sum_of_consumption = this_town->sum_of_consumption + consumption;

        // insert info
        insert_town_info(this_town, info);
    }

    struct consumption_info *current_info = this_town->first_consumption_info;

    while (current_info != NULL) {
        printf("%d-%d", current_info->number_of_people, current_info->average_consumption); 
        printf(has_next(current_info)?" ":"\n");
        current_info = current_info->next_consumption_info;
    }

    printf("Consumo medio: %.2f m3.\n", div_two_digits_precision(this_town->sum_of_consumption, this_town->sum_of_people) );

    free(this_town);
    this_town = NULL;
}

int main(int argc, char const *argv[]) {
    // https://www.urionlinejudge.com.br/judge/en/problems/view/1023
    int amount_of_properties;
    short is_first = 1;
    do {
        scanf("%d", &amount_of_properties);

        if (amount_of_properties > 0) {
            // print line between tests
            if (is_first == 1) {
                is_first = 0;
            } else {
                printf("\n");
            }

            run_test_case(amount_of_properties);
        }

    } while (amount_of_properties > 0);
    
    return 0;
}
