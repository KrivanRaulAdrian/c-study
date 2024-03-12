#include <stdio.h>
#include <stdbool.h>

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
        printf("meow\n");
    }

    printf("\n");

    while (true)
    {
        printf("meow\n");
    }

    return 0;
}