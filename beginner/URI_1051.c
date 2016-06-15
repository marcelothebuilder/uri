/* URI Online Judge | 1051 Taxes

By Neilor Tonin, URI Brazil Timelimit: 1

In an imaginary country called Lisarb, all the people are very happy to pay
their taxes because they know that doesn’t exist corrupt politicians and the
taxes are used to benefit the population, without any misappropriation. The
currency of this country is Rombus, whose symbol is R$.

Read a value with 2 digits after the decimal point, equivalent to the salary of
a Lisarb inhabitant. Then print the due value that this person must pay of
taxes, according to the table below.

https://urionlinejudge.r.worldssl.net/gallery/images/problems/UOJ_1051_en.png

Remember, if the salary is R$ 3,002.00 for example, the rate of 8% is only over
R$ 1,000.00, because the salary from R$ 0.00 to R$ 2,000.00 is tax free. In the
follow example, the total rate is 8% over R$ 1000.00 + 18% over R$ 2.00,
resulting in R$ 80.36 at all. The answer must be printed with 2 digits after the
decimal point. 

== Input
The input contains only a float-point number, with 2 digits
after the decimal point.

== Output
Print the message "R$" followed by a blank space and the total tax to be
payed, with two digits after the decimal point. If the value is up to 2000,
print the message "Isento".
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	float salary;
	scanf("%f", &salary);

	float tax_sum = 0;

	if (salary > 4500.0) {
		tax_sum += (salary - 4500.0) * 0.28;
	}

	if (salary > 3000.0) {
		if (salary - 3000.0 > 1500.0) {
			tax_sum += 1500.0 * 0.18;
		} else {
			tax_sum += (salary - 3000.0) * 0.18;
		}
	}

	if (salary > 2000.0) {
		if (salary - 2000.0 > 1000.0) {
			tax_sum += 1000.0 * 0.08;
		} else {
			tax_sum += (salary - 2000.0) * 0.08;
		}
	}

	if (tax_sum > 0) {
		printf("R$ %.2f\n", tax_sum);
	} else {
		printf("Isento\n");
	}

	return 0;
}
