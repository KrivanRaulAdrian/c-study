#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    char *filename = argv[1];

    FILE *f = fopen(filename, "r");
    if (f == NULL)
    {
        return 1;
    }

    uint8_t buffer[4];
    int chunk_size = 1;
    int chunk_number = 4;
    int blocks_read = fread(buffer, chunk_size, chunk_number, f);

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        printf("%u\n", buffer[i]);
    }
    printf("Blocks read: %u\n", blocks_read);

    fclose(f);
}