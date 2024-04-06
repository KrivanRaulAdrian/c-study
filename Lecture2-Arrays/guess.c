#include <stdio.h>

int main(void)
{
    int number = 5;
    int guess;

    printf("Guess the number: ");
    while (scanf("%i", &guess) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    while (guess != number)
    {
        printf("Wrong guess!\n");

        printf("Guess again: ");
        while (scanf("%i", &guess) != 1)
        {
            printf("Invalid input. Please enter a number: ");
            while (getchar() != '\n')
                ;
        }
    }

    printf("You're correct!\n");

    return 0;
}