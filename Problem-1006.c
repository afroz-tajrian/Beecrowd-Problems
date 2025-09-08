#include <stdio.h>

int main() {

    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    float D = (A * 2) + (B * 3) + (C * 5);
    float E = D / (2 + 3 + 5);
    printf("MEDIA = %.1f\n", E);

    return 0;
}
