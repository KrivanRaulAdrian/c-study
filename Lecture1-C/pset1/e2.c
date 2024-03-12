#include <stdio.h>

void ask_name();

int main(void)
{
    ask_name();

    return 0;
}

void ask_name()
{
    char name[10];
    printf("What is your name? ");
    scanf("%s", name);

    printf("hello, %s\n", name);
}