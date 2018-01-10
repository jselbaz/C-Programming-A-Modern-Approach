#include <stdio.h>

int main(void)
{
    int days, start;
    printf("Please enter how many days in a month: ");
    scanf("%d", &days);
    printf("Please enter starting day of the week (1= Sun, 7 = Sat) : ");
    scanf("%d", &start);

    for (int i = 1; i < start; i++ )
    {
        printf("   ");
    }

    for (int i = 1; i <= days; i++)
    {
        printf("%3d", i);
        if (((i + start - 1) % 7) == 0 )
            printf("\n");
    }

    return 0;
}
