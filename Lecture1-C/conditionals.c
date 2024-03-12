#include <stdio.h>

int main(void)
{
    int x;
    printf("What's x? ");
    scanf("%u", &x);

    int y;
    printf("What's y? ");
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

    return 0;
}