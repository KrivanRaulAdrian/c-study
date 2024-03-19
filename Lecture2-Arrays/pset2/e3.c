#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int only_digits(const char *str);
char rotate(char c, int key);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    if (!only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);

    printf("plaintext: ");
    char plaintext[100];
    fgets(plaintext, sizeof(plaintext), stdin);

    printf("ciphertext: ");
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        char encrypted_char = rotate(plaintext[i], key);
        printf("%c", encrypted_char);
    }
    printf("\n");

    return 0;
}

int only_digits(const char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
        {
            return 0;
        }
        str++;
    }
    return 1;
}

char rotate(char c, int key)
{
    if (isalpha(c))
    {
        char base = isupper(c) ? 'A' : 'a';
        return (c - base + key) % 26 + base;
    }
    return c;
}
