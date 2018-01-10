#include <stdio.h>

int main (void)
{
    printf("Please enter a UPC code: ");
    int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,check;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&check);
    int sum1 = i1 + i3 + i5 + i7 + i9 + i11;
    int sum2 = i2 + i4 + i6 + i8 + i10;
    int sum3 = 3 * sum1 + sum2;
    int total = (9 - ((sum3 - 1) % 10));

    if (check == total)
        printf("VALID");
    else
        printf("NOT VALID");
    return 0;
}
