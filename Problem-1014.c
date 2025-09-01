#include <stdio.h>

int main() {

    int a;
    double b;
    scanf("%d %lf", &a, &b);
    double c = a / b;
    printf("%.3lf km/l\n", c);

    return 0;
}
