#include <stdio.h>
#include <string.h>

int main(void)
{
    char answer[10];
    printf("What's your name? ");
    while (1)
    {
        if (scanf("%9s", answer) != 1 || getchar() != '\n')
        {
            printf("Invalid input. Please enter a name: ");
            while (getchar() != '\n')
                ;
        }
        else
        {
            break;
        }
    }

    printf("Hello, %s!\n", answer);

    return 0;
}