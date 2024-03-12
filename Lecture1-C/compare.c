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
    scanf("%u", &x);

    int y;
    printf("What is y? \n");
    scanf("%u", &y);

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