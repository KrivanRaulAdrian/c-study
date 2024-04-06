#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL)
    {
        return 1;
    }

    char name[15];
    char number[20];

    printf("Name: ");
    scanf("%14s", name);

    printf("Number: ");
    scanf("%19s", number);

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}