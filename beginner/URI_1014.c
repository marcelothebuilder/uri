#include <stdio.h>

int main(int argc, char const *argv[])
{
	int distance;
	float fuelTotal;
	scanf("%d", &distance);
	scanf("%f", &fuelTotal);
	float avgConsumption = distance / fuelTotal;
	printf("%.3f km/l\n", avgConsumption);
	return 0;
}