#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "HI!";
    char t[] = "BYE!";

    printf("%s\n", s);
    printf("%s\n", t);

    printf("\n");

    char words[2][5];

    strcpy(words[0], "HI!");
    strcpy(words[1], "BYE!");

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);

    return 0;
}