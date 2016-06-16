/*
 URI Online Judge | 1059
Even Numbers

Adapted by Neilor Tonin, URI Brazil
Timelimit: 1

Write a program that prints all even numbers between 1 and 100, including them if it is the case.

Input
In this extremely simple problem there is no input.

Output
Print all even numbers between 1 and 100, including them, one by row.

SOLUTION AUTHOR: https://github.com/marcelothebuilder/
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i;
	int MAX_INCLUSIVE = 100;
	for (i = 1; i <= MAX_INCLUSIVE; ++i)
	{
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}
}
