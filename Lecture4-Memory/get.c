#include <stdio.h>

int main(void)
{
    int n;
    printf("n: ");
    while (scanf("%u", &n) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    printf("n: %u\n", n);

    char s[5];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}