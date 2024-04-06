#include <stdio.h>

void print_row(int length);

int main(void)
{
    int height;

    printf("Height: ");
    scanf("%u", &height);

    for (int i = 0; i < height; i++)
    {
        print_row(i + 1);
    }

    return 0;
}

void print_row(int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("#");
    }
    printf("\n");
}