#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char const *argv[]) {
    // https://www.urionlinejudge.com.br/judge/en/problems/view/1043
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    // https://pt.wikipedia.org/wiki/Tri%C3%A2ngulo
    // medida de qualquer um dos lados seja menor que a
    // soma das medidas dos outros dois e maior que o
    // valor absoluto da diferença entre essas medidas.
    bool condicaoTriangulo = (fabs(b - c) < a) && (a < b + c);
    
    if (condicaoTriangulo) {
    	double perimetro = a + b + c;
    	printf("Perimetro = %.1f\n", perimetro);
    } else {
    	double area = ((a+b) * c)/2;
    	printf("Area = %.1f\n", area);
    }

    return 0;
}