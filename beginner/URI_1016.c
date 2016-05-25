#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int car_one_speed = 60;
	int car_two_speed = 90;

	double dist_speed = abs(car_two_speed - car_one_speed);

	int dist;

	scanf("%d", &dist);

	int time_to_dist = (dist/dist_speed) * 60;

	printf("%d minutos\n", time_to_dist);

	return 0;
}