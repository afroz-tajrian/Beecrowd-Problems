#include <stdio.h>

int main() {

    int A, B;
    float C;
    scanf("%d %d %f", &A, &B, &C);
    float s = B*C;
    printf("NUMBER = %d\n", A);
    printf("SALARY = U$ %.2f\n", s);

    return 0;
}
