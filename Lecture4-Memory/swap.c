#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a = 10;
    int b = 50;

    printf("a is %u, b is %u\n", a, b);
    swap(&a, &b);
    printf("a is %u, b is %u\n", a, b);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}