#include <stdio.h>
#include <stdbool.h>

void meow(void);

int main(void)
{
    int i = 0;
    while (i < 3)
    {
        printf("meow\n");
        i++;
    }

    printf("\n");

    for (int j = 0; j < 3; j++)
    {
        meow();
    }

    printf("\n");

    while (true)
    {
        printf("meow\n");
    }

    return 0;
}

void meow(void)
{
    printf("Meow!\n");
}