#include <stdio.h>

int main(void)
{
    printf("Please enter a day in the form of mm/dd/yyyy: ");
    int m, d, y;
    scanf("%d/%d/%d", &m, &d, &y);
    printf("You entered the date %2d%.2d%.2d", y, m, d);
    return 0;
}
