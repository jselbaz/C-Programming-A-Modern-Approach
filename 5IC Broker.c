#include <stdio.h>

int main(void)
{
    float size, commission;
    printf("Please enter transaction size: ");
    scanf("%f", &size);

        if (size < 2500.00f)
            commission = size * 0.017 + 30.00f;
        else if (size < 6250.00f)
            commission = size * 0.0066f + 56.00f;
        else if (size < 20000.00f)
            commission = size * 0.0034f + 76.00f;
        else if (size < 50000.00f)
            commission = size * 0.0022f + 100.00f;
        else if (size < 500000.00f)
            commission = size * 0.0011f + 155.00f;
        else if (size >= 500000.00f)
            commission = size * 0.0009f + 255.00f;
    if (commission < 39.00f)
        commission = 39.00f;

    printf("Your commission is: $%.2f", commission);

    return 0;
}
