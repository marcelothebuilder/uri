#include <stdio.h>
int main(int argc, char const *argv[])
{
	int age_in_days;
	scanf("%d", &age_in_days);

	int YEAR_DAYS = 365;
	int MONTH_DAYS = 30;

	int years = (age_in_days / YEAR_DAYS);
	int years_resto = (age_in_days % YEAR_DAYS);

	int months = (years_resto / MONTH_DAYS);
	int months_resto = (years_resto % MONTH_DAYS);

	int days = months_resto;

	printf("%d ano(s)\n", years);
	printf("%d mes(es)\n", months);
	printf("%d dia(s)\n", days);

	return 0;
}