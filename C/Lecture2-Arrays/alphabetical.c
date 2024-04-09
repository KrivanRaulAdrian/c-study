#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char phrase[10];
    printf("Enter a phrase: ");
    scanf("%9s", phrase);

    int length = strlen(phrase);
    for (int i = 0; i < length - 1; i++)
    {
        if (toupper(phrase[i] > phrase[i + 1]))
        {
            printf("Not in alphabetical order.\n");
            return 0;
        }
    }
    printf("In alphabetical order.\n");
    return 0;
}