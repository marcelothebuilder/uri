#include <stdio.h>

int main(int argc, char const *argv[])
{
    // https://www.urionlinejudge.com.br/judge/en/problems/view/1041
    float ponto_x, ponto_y;

    scanf("%f %f", &ponto_x, &ponto_y);

    // If the point is at the origin, write the message "Origem".
    if (ponto_x == 0 && ponto_y == 0) {
        printf("Origem\n");
    // checa se estamos sobre o eixo x
    } else if (ponto_x == 0) {
        printf("Eixo Y\n");
    // checa se estamos sobre o eixo y
    } else if (ponto_y == 0) {
        printf("Eixo X\n");
    // checa por Q1
    } else if (ponto_x > 0 && ponto_y > 0) {
        printf("Q1\n");
    } else if (ponto_x < 0 && ponto_y > 0) {
        printf("Q2\n");
    } else if (ponto_x < 0 && ponto_y < 0) {
        printf("Q3\n");
    // não precisamos checar, a única resposta possivel é Q4
    } else {
        printf("Q4\n");
    }

    return 0;
}