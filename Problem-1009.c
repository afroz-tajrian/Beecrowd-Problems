#include <stdio.h>

int main() {
    char name[100];
    double salary, sales, total;
    scanf("%s %lf %lf", name, &salary, &sales);
    total = salary + 0.15 * sales;
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
