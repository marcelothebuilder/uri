#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void simple_sort_swapper(double* one, double* two) {
    double aux = *one;
    *one = *two;
    *two = aux;
}

// we borrow this function from URI #1042 solution, changing int -> double
void simple_sort(double ints[], int sizeofInts) {
    // selection sort
    int limit;
    for (limit = sizeofInts - 1; limit > 0; limit--) {
        int i;
        for (i = 0; i < limit; i++) {
            if (ints[i] > ints[i+1]) {
                simple_sort_swapper(&ints[i], &ints[i+1]);
            }
        }
        
    }
}

int main(int argc, char const *argv[]) {
    // https://www.urionlinejudge.com.br/judge/en/problems/view/1045
    double values[3];
    scanf("%lf %lf %lf", &values[0], &values[1], &values[2]);
    int size = sizeof(values)/sizeof(double);
    simple_sort(values, size);
    // read them in reverse order
    double a = values[2];
    double b = values[1];
    double c = values[0];

    double a2 = pow(a, 2.0);
    double b2 = pow(b, 2.0);
    double c2 = pow(c, 2.0);

    // se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    if (a >= b+c) {
        printf("NAO FORMA TRIANGULO\n");
        // no reason to continue
        return 0;
    }
    // se A² = B² + C², apresente a mensagem: TRIANGULO RETANGULO
    if (a2 == b2 + c2)
        printf("TRIANGULO RETANGULO\n");
    // se A² > B² + C², apresente a mensagem: TRIANGULO OBTUSANGULO
    if (a2 > b2 + c2)
        printf("TRIANGULO OBTUSANGULO\n");
    // se A² < B² + C², apresente a mensagem: TRIANGULO ACUTANGULO
    if (a2 < b2 + c2)
        printf("TRIANGULO ACUTANGULO\n");
    // se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    if (a == b && b == c)
        printf("TRIANGULO EQUILATERO\n");
    // se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
    if ((a == b && b != c) || (b == c && a != b))
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}