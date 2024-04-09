#include <stdio.h>

int main(void)
{
    char answer[10];
    printf("What's your name? ");
    scanf("%9s", answer);

    printf("Hello, %s!\n", answer);

    return 0;
}