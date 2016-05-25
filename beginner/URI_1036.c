#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	// https://www.urionlinejudge.com.br/judge/en/problems/view/1036
	// Bhaskara's Formula

	// Read 3 floating-point numbers.
	// After, print the roots of bhaskara’s formula.
	// If it's impossible to calculate the roots because a division by
	// zero or a square root of a negative number, presents the message “Impossivel calcular”.

	// Read 3 floating-point numbers A, B and C. FORMAT: 10.0 20.1 5.1
	float a, b, c;

	scanf("%f %f %f", &a, &b, &c);

	if (a == 0) {
		printf("Impossivel calcular\n");
		return 0;
	}

	float base = 2 * a;

	float delta = pow(b, 2.0) - 4 * a * c;

	if (delta < 0) {
		printf("Impossivel calcular\n");
		return 0;
	}

	delta = sqrt(delta);

	// positive
	float r_1 = (b*-1 + delta) / base;

	// negative
	float r_2 = (b*-1 + delta*-1) / base;

	// Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.
	printf("R1 = %.5f\n", r_1);
	printf("R2 = %.5f\n", r_2);
	
	return 0;
}