#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    typedef struct
    {
        const char *name;
        int votes;
    } candidate;

    const int num_candidates = 5;
    candidate candidates[num_candidates];

    candidates[0].name = "Obama";
    candidates[0].votes = 10;

    candidates[1].name = "Biden";
    candidates[1].votes = 8;

    candidates[2].name = "Trump";
    candidates[2].votes = 5;

    candidates[3].name = "Lincoln";
    candidates[3].votes = 3;

    candidates[4].name = "Washington";
    candidates[4].votes = 9;

    char name[15];
    printf("Name: ");
    if (scanf("%10s", name) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(candidates[i].name, name) == 0)
        {
            printf("Found %d votes\n", candidates[i].votes);
            return 0;
        }
    }

    printf("Not found\n");

    return 1;
}