#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char name[10];
    printf("Name: ");
    scanf("%9s", name);

    int isValid = 1;
    for (int i = 0; i < strlen(name); i++)
    {
        if (!isalpha(name[i]))
        {
            isValid = 0;
            break;
        }
    }

    if (!isValid)
    {
        printf("Invalid input! Please enter a string of characters only.\n");
        return 1;
    }

    int length = strlen(name);

    printf("%i\n", length);

    return 0;
}