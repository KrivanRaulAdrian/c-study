#include <stdio.h>

void draw(int n);

int main(void)
{
    int height;
    printf("Height: ");
    while (scanf("%u", &height) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {

            printf("#");
        }
        printf("\n");
    }
}