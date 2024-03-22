#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./mario number\n");
        return 1;
    }

    int height = atoi(argv[1]);

    printf("Height, %s!\n", argv[1]);

    return 0;
}