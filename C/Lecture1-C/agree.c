#include <stdio.h>
#include <ctype.h>

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

    while (1)
    {
        scanf(" %c", &c);

        c = toupper(c);

        if (c == 'Y')
        {
            printf("Agreed.\n");
            break;
        }
        else if (c == 'N')
        {
            printf("Not agreed.\n");
            break;
        }
        else
        {
            printf("Invalid input. Please enter 'y' or 'n': ");

            while (getchar() != '\n')
                ;
        }
    }
}