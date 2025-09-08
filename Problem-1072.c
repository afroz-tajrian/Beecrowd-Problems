#include <stdio.h>

int main() {
    int N, X, in_count = 0, out_count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &X);

        if (X >= 10 && X <= 20) {
            in_count++;
        } else {
            out_count++;
        }
    }

    printf("%d in\n", in_count);
    printf("%d out\n", out_count);

    return 0;
}

