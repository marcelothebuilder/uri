#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int greaterOf(int a, int b) {
    return (a > b) ? a : b;
}

int smallerOf(int a, int b) {
    return (b > a) ? a : b;
}

int main(int argc, char const *argv[]) {
    // https://www.urionlinejudge.com.br/judge/en/problems/view/1044
    int a, b;
    scanf("%d %d", &a, &b);

    if (greaterOf(a, b) % smallerOf(a, b) == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}