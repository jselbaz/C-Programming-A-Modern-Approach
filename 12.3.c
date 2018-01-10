#include <stdio.h>

#define MSG_LEN 80

int main(void)
{
    char *p;
    char msg[MSG_LEN];

    printf("Enter a message: ");
    for (p = &msg[0]; p < &msg[MSG_LEN]; p++)
    {
        *p = getchar();
        if (*p == '\n')
            break;
    }

    printf("In reverse order: ");
    for (p--; p >= &msg[0]; p--)
        putchar(*p);
    printf("\n");

    return 0;
}
