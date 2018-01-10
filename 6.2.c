#include <stdio.h>

int main(void)
{
    printf("Please enter two integers: ");
    int d1, d2, rem;
    scanf("%d %d", &d1, &d2);
    while (d2 != 0)
    {
        rem = d1 % d2;
        d1 = d2;
        d2 = rem;
    }

    printf("Great common divisor is: %d\n", d1);

    return 0;
}
