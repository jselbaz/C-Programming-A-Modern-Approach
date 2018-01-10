#include <stdio.h>
#include <string.h>

#define WORD_LEN 20

int read_line(char str[], int n);

int main(void)
{
    char current_word[WORD_LEN+1], smallest_word[WORD_LEN+1], longest_word[WORD_LEN+1];

    printf("Enter a word: ");
    read_line(current_word, WORD_LEN);
    strcpy(smallest_word, strcpy(longest_word, current_word));

    while (strlen(current_word) != 4)
    {
        printf("Enter a word: ");
        read_line(current_word, WORD_LEN);
        if (strcmp(current_word, smallest_word) < 0)
                    strcpy(smallest_word, current_word);
        if (strcmp(current_word, longest_word) > 0)
                    strcpy(longest_word, current_word);
    }

    printf("\nSmallest Word: %s", smallest_word);
    printf("\nLargest Word: %s\n", longest_word);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
        str[i] = '\0';
        return i;
}
