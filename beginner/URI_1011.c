#include <stdio.h>
#include <math.h>
 
int main() {
    double pi = 3.14159;
    double radius;

    scanf("%lf", &radius);

    double result = (4.0/3) * pi * pow(radius, 3);

    printf("VOLUME = %.3f\n", result);

    return 0;
}