#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[10];
    printf("Input:  ");
    scanf("%9s", s);
    printf("Output: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}