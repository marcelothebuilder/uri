/*
 URI Online Judge | 1060
Positive Numbers

Adapted by Neilor Tonin, URI Brazil
Timelimit: 1

Write a program that reads 6 numbers.
These numbers will only be positive or
negative (disregard null values).
Print the total number of positive numbers.

Input
Six numbers, positive and/or negative.

Output
Print a message with the total number of positive numbers.

SOLUTION AUTHOR: https://github.com/marcelothebuilder/
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i;
	int positive_count = 0;

	for (i = 1; i <= 6; ++i) {
		double current_number = 0;
		scanf("%lf", &current_number);
		if (current_number > 0) {
			positive_count++;
		} 
	}

	printf("%d valores positivos\n", positive_count);
}
