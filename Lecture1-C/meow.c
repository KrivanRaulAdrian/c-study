#include <stdio.h>
#include <stdbool.h>

void meow(void);
void meow_meow(int n);

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

    meow_meow(5);

    return 0;
}

void meow(void)
{
    printf("Meow!\n");
}

void meow_meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow, Meow!\n");
    }
}