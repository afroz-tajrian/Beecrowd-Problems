#include <stdio.h>

int main() {
    int product_1, quantity_1;
    int product_2, quantity_2;
    float price_1, price_2, total;

    scanf("%d %d %f", &product_1, &quantity_1, &price_1);
    scanf("%d %d %f", &product_2, &quantity_2, &price_2);
    total = (quantity_1 * price_1) + (quantity_2 * price_2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}

