#include <stdio.h>

int main(void)
{
    int second;
    int minute;
    int remain;

    printf("input the second: ");
    scanf("%i", &second);

    minute = second / 60;
    remain = second % 60;

    printf("the time is %i : %i\n", minute, remain);

    return 0;
}
