#include <stdio.h>

int add(int num1, int num2);

int main(void)
{
    long int x;
    printf("x: ");
    while (scanf("%li", &x) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    long int y;
    printf("y: ");
    while (scanf("%li", &y) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    printf("%li\n", x + y);

    printf("\n");

    long a;
    printf("a: ");
    while (scanf("%li", &a) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    long b;
    printf("b: ");
    while (scanf("%li", &b) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    float z = (float)a / (float)b;
    printf("%.20f\n", z);

    printf("\n");

    long c;
    printf("c: ");
    while (scanf("%li", &c) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    long d;
    printf("d: ");
    while (scanf("%li", &d) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    double e = (double)c / (double)d;
    printf("%.20f\n", e);

    printf("\n");

    int num1;
    printf("num1: ");
    while (scanf("%i", &num1) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    int num2;
    printf("num2: ");
    while (scanf("%i", &num2) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    printf("sum: %i\n", add(num1, num2));

    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}