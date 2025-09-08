#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    char *months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("%s\n", months[N - 1]);

    return 0;
}

