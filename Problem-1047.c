#include <stdio.h>

int main() {
    int startHour, startMinute, endHour, endMinute;
    int startTotal, endTotal, duration, hours, minutes;

    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

    startTotal = startHour * 60 + startMinute;
    endTotal = endHour * 60 + endMinute;

    if (endTotal > startTotal) {
        duration = endTotal - startTotal;
    } else {
        duration = (24 * 60 - startTotal) + endTotal;
    }

    hours = duration / 60;
    minutes = duration % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}

