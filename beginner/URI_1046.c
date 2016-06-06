/*
URI Online Judge | 1046
Game Time

Adapted by Neilor Tonin, URI Brazil
Timelimit: 1

Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”
Input

Two integer numbers representing the start and end time of a game.
Output

Print the duration of the game as in the sample output.

SOLUTION AUTHOR: https://github.com/marcelothebuilder/
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int start_time, end_time;

	scanf("%d %d", &start_time, &end_time);

	// sum 24 to ending time if start_time is greater or equal
	int ending_time_24 = ((start_time >= end_time) ? end_time + 24 : end_time);

	int result = ending_time_24 - start_time;

	printf("O JOGO DUROU %d HORA(S)\n", result);

	return 0;
}
