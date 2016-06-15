/*
URI Online Judge | 1052
Month

Adapted by Neilor Tonin, URI Brazil
Timelimit: 1

Read an integer number between 1 and 12, including.
Corresponding to this number, you must print the month
of the year, in english, with the first letter in uppercase.

Input
The input contains only an integer number.

Output
Print the name of the month according to the input number, with the first letter in uppercase.

SOLUTION AUTHOR: https://github.com/marcelothebuilder/
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int month;
	scanf("%d", &month);

	switch (month) {
		case 1: printf("January\n"); break;
		case 2: printf("February\n"); break;
		case 3: printf("March\n"); break;
		case 4: printf("April\n"); break;
		case 5: printf("May\n"); break;
		case 6: printf("June\n"); break;
		case 7: printf("July\n"); break;
		case 8: printf("August\n"); break;
		case 9: printf("September\n"); break;
		case 10: printf("October\n"); break;
		case 11: printf("November\n"); break;
		case 12: printf("December\n"); break;
	}

	return 0;
}
