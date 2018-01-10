#include <stdio.h>

int main(void)
{
    int GS1, Group, Pub, Item, Check;
    printf("Please enter an ISBN with the ###-#-###-#####-# format: ");
    scanf("%d-%d-%d-%d-%d", &GS1, &Group, &Pub, &Item, &Check);
    printf("GSI prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\n", GS1, Group, Pub);
    printf("Item Number: %d\nCheck Digit: %d\n", Item, Check);

    return 0;
}
