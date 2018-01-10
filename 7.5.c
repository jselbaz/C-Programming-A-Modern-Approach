#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int sum = 0;

    printf("Please enter a word to calculate its scrabble score: ");

    while ((ch = getchar()) != '\n')
    {
        switch(toupper(ch))
        {
            case 'D': case 'G':
            sum += 2; break;
            case 'B': case 'C': case 'M': case 'P':
            sum += 3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
            sum += 4; break;
            case 'K':
            sum += 5; break;
            case 'J': case 'X':
            sum += 8; break;
            case 'Q': case 'Z':
            sum += 10; break;
            default:
            sum += 1; break;
        }
    }

    printf("Your Scrabble score is: %d\n", sum);

    return 0;

}
