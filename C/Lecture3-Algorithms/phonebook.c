#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
} person;

int main(void)
{
    person people[3];

    people[0].name = strdup("Carter");
    people[0].number = strdup("+1-617-495-1000");

    people[1].name = strdup("David");
    people[1].number = strdup("+1-617-495-1000");

    people[2].name = strdup("John");
    people[2].number = strdup("+1-949-468-2750");

    char name[10];
    printf("Name: ");
    if (scanf("%9s", name) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            free(people[i].name);
            free(people[i].number);
            return 0;
        }
    }

    printf("Not found\n");

    for (int i = 0; i < 3; i++)
    {
        free(people[i].name);
        free(people[i].number);
    }

    return 1;
}
