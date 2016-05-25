#include <stdio.h>
#include <math.h>
#include <float.h>

int main(int argc, char const *argv[])
{
	double notes[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

	double monetary_value;
	scanf("%lf", &monetary_value);
	
	int i;
	for (i = 0; i < (sizeof(notes)/sizeof(double)); ++i) {
		double note_or_coin = notes[i];
		double note_or_coins_count = monetary_value / note_or_coin;

		monetary_value = fmod(monetary_value, note_or_coin);

		if (note_or_coin == 100.00) {
			printf("NOTAS:\n");
		} else if (note_or_coin == 1.00) {
			printf("MOEDAS:\n");
		}

		// get the right value before floor(ing)
		note_or_coins_count += 1e-9; // <- obrigado Leonardo Mendes ;)

		printf("%.0f %s(s) de R$ %.2f\n", floor(note_or_coins_count), (note_or_coin >= 2.00) ? "nota" : "moeda", note_or_coin);

	}

	return 0;
}