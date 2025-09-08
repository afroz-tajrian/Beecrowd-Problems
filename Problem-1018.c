#include <stdio.h>
int main(){
    int N, notes[] = {100, 50, 20, 10, 5, 2, 1}, count[7] = {0};
    scanf("%d", &N);
    printf("%d\n", N);

    for(int i = 0; i < 7; i++){
        count[i] = N / notes[i];
        N = N % notes[i];
        printf("%d nota(s) de R$ %d,00\n", count[i], notes[i]);
    }

    return 0;
}
