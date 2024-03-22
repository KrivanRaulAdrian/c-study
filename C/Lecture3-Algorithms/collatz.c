#include <stdio.h>

int collatz(int n);

int main()
{
    int n;
    printf("Enter a positive integer: ");
    while (scanf("%d", &n) != 1)
    {
        printf("Invalid input. Please enter a positive integer: ");
        while (getchar() != '\n')
            ;
    }

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Number of steps to reach 1: %d\n", collatz(n));

    return 0;
}

int collatz(int n)
{
    if (n == 1)
        return 0;
    else if ((n % 2) == 0)
        return 1 + collatz(n / 2);
    else
        return 1 + collatz(3 * n + 1);
}