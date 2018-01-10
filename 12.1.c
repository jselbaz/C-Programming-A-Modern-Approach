#include <stdio.h>

#define MSG_LEN 80

int main(void)
{
    int i;
    char msg[MSG_LEN];

    printf("Enter a message: ");
    for (i = 0; i < MSG_LEN; i++)
    {
        msg[i] = getchar();
        if (msg[i] == '\n')
            break;
    }

    printf("In reverse order: ");
    for (i--; i >= 0; i--)
        putchar(msg[i]);
    printf("\n");

    return 0;
}
