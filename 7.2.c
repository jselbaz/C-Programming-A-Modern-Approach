#include <stdio.h>

int main(void)
{
    int i,n;

    printf("This program prints a table of squares\n");
    printf("Enter the number of entries in the table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0)
        {
            printf("Press enter to continue...");
            getchar();
        }
    }

    return 0;
}
