#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i*i <= n; i+=2)
    {
        if (i % 2 == 0)
            printf("%d\n", i*i);
        else continue;
    }

    return 0;
}
