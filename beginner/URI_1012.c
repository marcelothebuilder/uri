#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;

	double pi = 3.14159;

	scanf("%lf %lf %lf", &a, &b, &c);

	printf("TRIANGULO: %.3f\n", (a * c) / 2);
	printf("CIRCULO: %.3f\n", pi * pow(c, 2));
	printf("TRAPEZIO: %.3f\n", ((a+b)*c)/2);
	printf("QUADRADO: %.3f\n", b*b);
	printf("RETANGULO: %.3f\n", a*b);
	
	return 0;
}