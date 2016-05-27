#include <stdio.h>
#include <math.h>

void sum(int n1, int d1, int n2, int d2, int *r1, int *r2) {
    *r1 = (n1*d2 + n2*d1) ;
    *r2 = (d1*d2);
}

void subtr(int n1, int d1, int n2, int d2, int *r1, int *r2) {
    *r1 = (n1*d2 - n2*d1);
    *r2 = (d1*d2);
}

void mult(int n1, int d1, int n2, int d2, int *r1, int *r2) {
    *r1 = (n1*n2);
    *r2 = (d1*d2);
}

void div(int n1, int d1, int n2, int d2, int *r1, int *r2) {
    *r1 = (n1*d2);
    *r2 = (n2*d1);
}

int euclides_mdc(int n1, int n2) {
    int res = n1 % n2;

    if (res == 0) {
        return abs(n2);
    }

    return euclides_mdc(n2, res);
}

void calc() {
    int n1, d1, n2, d2, r1, r2;
    char operator;
    scanf("%d / %d %c %d / %d", &n1, &d1, &operator, &n2, &d2);
    switch (operator) {
        case '+':
            sum(n1, d1, n2, d2, &r1, &r2);
            break;
        case '-':
            subtr(n1, d1, n2, d2, &r1, &r2);
            break;
        case '*':
            mult(n1, d1, n2, d2, &r1, &r2);
            break;
        case '/':
            div(n1, d1, n2, d2, &r1, &r2);
            break;
    }

    int mdc = euclides_mdc(r1, r2);

    printf("%d/%d = %d/%d\n", r1, r2, r1/mdc, r2/mdc, mdc);
}

int main(int argc, char const *argv[]) {
    // https://www.urionlinejudge.com.br/judge/en/problems/view/1022
    
    int count;

    scanf("%d", &count);

    int i;

    for (i = 0; i < count; ++i) {
        calc();
    }

    return 0;
}
