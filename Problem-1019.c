#include <stdio.h>

int main() {

   int totalSeconds, leftSeconds, hours, minutes, seconds;
   scanf("%d", &totalSeconds);

   hours = totalSeconds / 3600;
   leftSeconds = totalSeconds % 3600;

   minutes = leftSeconds / 60;
   leftSeconds = leftSeconds % 60;

   seconds = leftSeconds;

   printf("%d:%d:%d\n", hours, minutes, seconds);


    return 0;
}
