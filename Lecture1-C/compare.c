#include <stdio.h>

void compare();

int main(void)
{
    compare();

    return 0;
}

void compare()
{
    int x;
    printf("What is x? \n");
    while (scanf("%u", &x) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    int y;
    printf("What is y? \n");
    while (scanf("%u", &y) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}