#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);  // Print out the value of the pointer: (0x16d9b302c)
    printf("%u\n", *p); // Print out the the value that 'p' points to: (50)

    printf("\n");

    char *s = "HI!";
    printf("%s\n", s);
    printf("%p\n", s);

    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", &s[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%c", *s);
        s++;
    }
    printf("\n");
}