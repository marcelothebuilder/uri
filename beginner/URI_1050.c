/*
URI Online Judge | 1050
DDD

Adapted by Neilor Tonin, URI Brazil
Timelimit: 1

Read an integer number that is the code number for phone dialing.
Then, print the destination according to the following table:
https://urionlinejudge.r.worldssl.net/gallery/images/problems/UOJ_1050.png

If the input number isn’t found in the above table,
the output must be:
DDD não cadastrado

That means “DDD not found” in Portuguese language.

Input
The input consists in a unique integer number.

Output
Print the city name corresponding to the input DDD. Print DDD nao cadastrado if doesn't exist corresponding DDD to the typed number.

SOLUTION AUTHOR: https://github.com/marcelothebuilder/
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ddd_info
{
	int ddd;
	char destination[15];
} ddd_info;

int main(int argc, char const *argv[])
{
	int ddd;
	scanf("%d", &ddd);

	ddd_info ddds[8];
	ddds[0].ddd=61;
	strncpy(ddds[0].destination, "Brasilia", sizeof(ddds[0].destination));

	ddds[1].ddd=71;
	strncpy(ddds[1].destination, "Salvador", sizeof(ddds[1].destination));

	ddds[2].ddd=11;
	strncpy(ddds[2].destination, "Sao Paulo", sizeof(ddds[2].destination));

	ddds[3].ddd=21;
	strncpy(ddds[3].destination, "Rio de Janeiro", sizeof(ddds[3].destination));

	ddds[4].ddd=32;
	strncpy(ddds[4].destination, "Juiz de Fora", sizeof(ddds[4].destination));

	ddds[5].ddd=19;
	strncpy(ddds[5].destination, "Campinas", sizeof(ddds[5].destination));

	ddds[6].ddd=27;
	strncpy(ddds[6].destination, "Vitoria", sizeof(ddds[6].destination));

	ddds[7].ddd=31;
	strncpy(ddds[7].destination, "Belo Horizonte", sizeof(ddds[7].destination));

	int i;
	int ddds_count = sizeof(ddds)/sizeof(ddd_info);
	for (i = 0; i < ddds_count; ++i)
	{
		if (ddd == ddds[i].ddd) {
			printf("%s\n", ddds[i].destination);
			return 0;
		}
	}

	printf("%s\n", "DDD nao cadastrado");

	return 0;
}
