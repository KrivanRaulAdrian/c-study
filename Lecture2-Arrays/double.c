#include <stdio.h>

int main(void)
{
    int size;
    printf("Enter a size: ");
    while (scanf("%i", &size) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    int sequence[size];

    sequence[0] = 1;
    printf("%i\n", sequence[0]);

    for (int i = 1; i < size; i++)
    {
        sequence[i] = 2 * sequence[i - 1];
        printf("%i\n", sequence[i]);
    }

    return 0;
}