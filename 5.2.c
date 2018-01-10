#include <stdio.h>

int main(void)
{
    printf("Please enter a 24 hour time in the XX:XX format: ");
    int hour, min;
    scanf("%d:%d", &hour, &min);
    if (hour == 0)
    {
        hour = 12;
        printf("%d:%d AM", hour, min);
    }
    else if (hour > 12)
    {
        hour -= 12;
        printf("%d:%d PM", hour, min);
    }
    else if (hour >= 12)
    {
        printf("%d:%d PM", hour, min);
    }
    else printf("%d:%d AM", hour, min);

    return 0;
}
