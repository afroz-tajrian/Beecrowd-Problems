#include <stdio.h>

int main() {

    int ageInDays, LeftDays, years, months, days;
    scanf("%d", &ageInDays);

    years = ageInDays / 365;
    LeftDays = ageInDays % 365;

    months = LeftDays / 30;
    LeftDays = LeftDays % 30;

    days = LeftDays;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}
