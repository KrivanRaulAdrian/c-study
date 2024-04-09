#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[10];
    printf("Before: ");
    scanf("%9s", s);
    printf("After:  ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");

    return 0;
}