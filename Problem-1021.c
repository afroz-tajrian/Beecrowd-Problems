#include <stdio.h>
#include <math.h>

int main() {
    double N;
    int notes[] = {100, 50, 20, 10, 5, 2};
    int coins[] = {100, 50, 25, 10, 5, 1};
    int count, i;
    scanf("%lf", &N);

    int cents = round(N * 100);
    printf("NOTAS:\n");
    for(i = 0; i < 6; i++){
        count = cents / (notes[i]*100);
        cents %= (notes[i]*100);
        printf("%d nota(s) de R$ %d.00\n", count, notes[i]);
    }

    printf("MOEDAS:\n");
    count = cents / 100;
    cents %= 100;
    printf("%d moeda(s) de R$ 1.00\n", count);
    for(i = 1; i < 6; i++){
        count = cents / coins[i];
        cents %= coins[i];
        printf("%d moeda(s) de R$ %.2f\n", count, coins[i]/100.0);
    }

    return 0;
}
