#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    int j;

    printf("i: ");
    while (scanf("%u", &i) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    printf("j: ");
    while (scanf("%u", &j) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    printf("\n");

    char s[5];
    char t[5];

    printf("s: ");
    scanf("%s", s);

    printf("t: ");
    scanf("%s", t);

    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    printf("%p\n", s);
    printf("%p\n", t);
}