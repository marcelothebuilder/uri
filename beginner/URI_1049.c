/*
URI Online Judge | 1049
Animal

By Neilor Tonin, URI Brazil
Timelimit: 1

In this problem, your job is to read three Portuguese words.
These words define ananimal according to the table below,
from left to right. After, print the chosen animal defined
by these three words.

https://urionlinejudge.r.worldssl.net/gallery/images/problems/UOJ_1049_b.png

Input
The input contains 3 words, one by line, that will be used to identify the
animal, according to the above table, with all letters in lowercase.

Output
Print the animal name according to the given input.

SOLUTION AUTHOR: https://github.com/marcelothebuilder/
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char first[15];
	char second[15];
	char third[15];

	fgets(first, 15, stdin);
	fgets(second, 15, stdin);
	fgets(third, 15, stdin);

	strtok(first, "\n");
	strtok(second, "\n");
	strtok(third, "\n");

	if (strcmp(first, "vertebrado")==0) {
		if (strcmp(second, "ave")==0) {
			if (strcmp(third, "carnivoro")==0) {
				printf("aguia\n");
			} else {
				// onivoro
				printf("pomba\n");
			}
		} else {
			// mamifero
			if (strcmp(third, "onivoro")==0) {
				printf("homem\n");
			} else {
				// herbivoro
				printf("vaca\n");
			}
		}

	} else {
		// invertebrado
		if (strcmp(second, "inseto")==0) {
			if (strcmp(third, "hematofago")==0) {
				printf("pulga\n");
			} else {
				// herbivoro
				printf("lagarta\n");
			}
		} else {
			// anelideo
			if (strcmp(third, "hematofago")==0) {
				printf("sanguessuga\n");
			} else {
				// onivoro
				printf("minhoca\n");
			}
		}
	}

	return 0;
}
