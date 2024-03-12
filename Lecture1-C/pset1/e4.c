#include <stdio.h>

void print_piramid(int bricks, int height);

int main(void)
{
    int n;
    do
    {
        printf("Height: ");
        scanf("%u", &n);
    } while (n < 1 || n > 8);
    for (int i = 0; i < n; i++)
    {
        print_piramid(i + 1, n);
    }

    return 0;
}

void print_piramid(int bricks, int height)
{
    for (int i = 0; i < height - bricks; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("  ");
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}