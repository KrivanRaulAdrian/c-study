#include <stdio.h>

void get_agreement();

int main(void)
{
    get_agreement();

    return 0;
}

void get_agreement()
{
    char c;
    printf("Do you agree? ");
    scanf("%c", &c);

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}
