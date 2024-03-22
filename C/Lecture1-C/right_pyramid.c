#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    int height;

    printf("Height: ");
    scanf("%u", &height);

    for (int i = 0; i < height; i++)
    {
        print_row(height - i - 1, i + 1);
    }

    return 0;
}

void print_row(int spaces, int bricks)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}