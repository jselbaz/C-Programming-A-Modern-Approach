#include <stdio.h>

int main(void)
{
    printf("The value of an int is %d\n", (int) sizeof(int));
    printf("The value of a short is %d\n", (int) sizeof(short));
    printf("The value of a long is %d\n", (int) sizeof(long));
    printf("The value of a float is %d\n", (int) sizeof(float));
    printf("The value of a double is %d\n", (int) sizeof(double));
    printf("The value of a long double is %d\n", (int) sizeof(long double));

    return 0;
}
