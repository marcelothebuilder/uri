#include <stdio.h>
#include <string.h>

void simple_sort_swapper(int* one, int* two) {
    int aux = *one;
    *one = *two;
    *two = aux;
}

void simple_sort(int ints[], int sizeofInts) {
    // selection sort
    int limit;
    for (limit = sizeofInts - 1; limit > 0; limit--) {
        int i;
        for (i = 0; i < limit; i++) {
            if (ints[i] > ints[i+1]) {
                simple_sort_swapper(&ints[i], &ints[i+1]);
            }
        }
        
    }
}

int main(int argc, char const *argv[]) {
    // https://www.urionlinejudge.com.br/judge/en/problems/view/1042
    // read the values into valores
    int valores[3];
    scanf("%d %d %d", &valores[0], &valores[1], &valores[2]);
    int size = sizeof(valores)/sizeof(int);

    // copy valores into valores_backup, we'll need this to print
    // the original values.
    int valores_backup[size];
    memcpy(&valores_backup, &valores, sizeof(valores));

    // sort with selection sort
    simple_sort(valores, size);

    // print the sorted array
    int i;
    for (i = 0; i < size; ++i) {
        printf("%d\n", valores[i]);
    }

    printf("\n");

    // print the original array
    for (i = 0; i < size; ++i) {
        printf("%d\n", valores_backup[i]);
    }

    return 0;
}