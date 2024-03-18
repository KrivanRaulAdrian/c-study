#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check_phrase(char *phrase);

int main(void)
{
    char phrase[10];
    bool correct = false;

    while (!correct)
    {
        printf("Enter a phrase: ");
        scanf("%9s", phrase);
        correct = check_phrase(phrase);

        if (!correct)
        {
            printf("Incorrect. Try again.\n");
        }
    }

    printf("Come in!\n");
}

bool check_phrase(char *phrase)
{
    char password[] = "Please";

    if (strcmp(phrase, password) == 0)
    {
        return true;
    }
    return false;
}