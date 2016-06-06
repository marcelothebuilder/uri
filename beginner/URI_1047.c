/*
URI Online Judge | 1047
Game Time with Minutes

Adapted by Neilor Tonin, URI Brazil
Timelimit: 1

Read the start time and end time of a game, in hours and minutes (initial hour,
initial minute, final hour, final minute). Then print the duration of the game,
knowing that the game can begin in a day and finish in another day,

Obs.: With a maximum game time of 24 hours and the minimum game time of 1
minute.

Input
Four integer numbers representing the start and end time of the game.

Output
Print the duration of the game in hours and minutes, in this format: “O JOGO
DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game lasted XXX hour(s)
and YYY minutes.

SOLUTION AUTHOR: https://github.com/marcelothebuilder/
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int initial_hour, initial_minute, final_hour, final_minute;
	int elapsed_hours, elapsed_minutes;

	scanf("%d %d %d %d", &initial_hour, &initial_minute, &final_hour, &final_minute);

	if (initial_minute > final_minute) {
		elapsed_minutes = final_minute + 60 - initial_minute;
		final_hour -= 1;
	} else {
		elapsed_minutes = final_minute - initial_minute;
	}

	if (initial_hour > final_hour || (initial_hour == final_hour && elapsed_minutes == 0)) {
		elapsed_hours = final_hour + 24 - initial_hour;
	} else {
		elapsed_hours = final_hour - initial_hour;
	}


	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", elapsed_hours, elapsed_minutes );
	return 0;
}
