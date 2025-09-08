#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    if (scanf("%lf %lf %lf", &A, &B, &C) != 3)
        return 0;

    double delta = B * B - 4.0 * A * C;

    if (A == 0.0 || delta < 0.0) {
        printf("Impossivel calcular\n");
    } else {
        double sqrtDelta = sqrt(delta);
        double R1 = (-B + sqrtDelta) / (2.0 * A);
        double R2 = (-B - sqrtDelta) / (2.0 * A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}

