#include <stdio.h>

int main() {
    double A, B, C, pi = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    double triangulo = (A * C) / 2.0;
    printf("TRIANGULO: %.3lf\n", triangulo);

    double circulo = pi * C * C;
    printf("CIRCULO: %.3lf\n", circulo);

    double trapezio = ((A + B) * C) / 2.0;
    printf("TRAPEZIO: %.3lf\n", trapezio);

    double quadrado = B * B;
    printf("QUADRADO: %.3lf\n", quadrado);

    double retangulo = A * B;
    printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}
