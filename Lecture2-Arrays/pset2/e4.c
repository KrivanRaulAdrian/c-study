#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int isValidKey(char *key);
char encryptChar(char c, char *key);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }

    if (!isValidKey(argv[1]))
    {
        printf("Key is invalid.\n");
        return 1;
    }

    char plaintext[100];
    printf("plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            printf("%c", encryptChar(plaintext[i], argv[1]));
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");

    return 0;
}

int isValidKey(char *key)
{
    int freq[ALPHABET_SIZE] = {0};

    if (strlen(key) != ALPHABET_SIZE)
    {
        return 0;
    }

    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        if (!isalpha(key[i]))
        {
            return 0;
        }
    }

    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        if (islower(key[i]))
        {
            key[i] = toupper(key[i]);
        }
        if (freq[key[i] - 'A'] > 0)
        {
            return 0;
        }
        freq[key[i] - 'A']++;
    }

    return 1;
}

char encryptChar(char c, char *key)
{
    if (islower(c))
    {
        return tolower(key[toupper(c) - 'A']);
    }
    else
    {
        return key[toupper(c) - 'A'];
    }
}
