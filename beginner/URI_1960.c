/* URI Online Judge | 1960 Roman Numerals for Page Numbers

By M.C. Pinto, UNILA BR Brazil Timelimit: 1

The ECI (Editio Chronica Incredibilis or Amazing Chronicles Editors) is very
traditional when numbering the pages of its books. It always uses the Roman
numerals for that. And its books never have more than 999 pages. When necessary,
the books are split into volumes. You must write a program that, given an arabic
number, show its equivalent in roman numerals. Remember that I stands for 1, V
for 5, X for 10, L for 50, C for 100, D for 500 and M stands for 1000.

Input
The input is a positive integer number N (0 < N < 1000).

Output
The output is the number N written as Roman numerals in a single line.
Always use uppercase letters.

SOLUTION AUTHOR: https://github.com/marcelothebuilder/
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1 = I
2 = II
3 = III
4 = IV
5 = V
6 = VI
7 = VII
8 = VIII
9 = IX */
void addRoman(int number, char string[], int *stringPos, char unitChar, char middleChar, char uperChar) {
	if (number >= 1 && number <= 3) {
		int i;
		for (i = 0; i < number; ++i) {
			string[(*stringPos)++] = unitChar;
		}
	} else if (number == 4) {
		string[(*stringPos)++] = unitChar;
		string[(*stringPos)++] = middleChar;
	} else if (number == 5) {
		string[(*stringPos)++] = middleChar;
	} else if (number >= 6 && number <= 8) {
		string[(*stringPos)++] = middleChar;
		int i;
		for (i = 0; i < (number-5); ++i) {
			string[(*stringPos)++] = unitChar;
		}
	} else if (number == 9) {
		string[(*stringPos)++] = unitChar;
		string[(*stringPos)++] = uperChar;
	}
}

int main(int argc, char const *argv[]) {
	// Input
	int number;
	scanf("%d", &number);

	char chars[50];
	int index_counter = 0;

	int i; // sentinel

	int div;

	div = number / 100;

	// thousand
	if (div > 0) {
		addRoman(div, chars, &index_counter, 'C', 'D', 'M');
		number = number % 100;
	}

	div = number / 10;
	// hundreds
	if (div > 0) {
		addRoman(div, chars, &index_counter, 'X', 'L', 'C');
		number = number % 10;
	}

	// tens
	if (number > 0) {
		addRoman(number, chars, &index_counter, 'I', 'V', 'X');
	}

	chars[index_counter] = '\0';

	printf("%s\n", chars);

	return 0;
}