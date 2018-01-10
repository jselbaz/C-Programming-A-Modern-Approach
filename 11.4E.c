#include <stdio.h>

void swap(int *p, int *q);;

int main(void)
{
    int i = 1;
    int j = 2;
    int *p = &i;
    int *q = &j;
    printf("i = %d, j = %d",*p, *q);
    printf("\n");
    swap(&i, &j);
    printf("i = %d, j = %d",*p, *q);

    return 0;
}

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
