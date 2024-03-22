#include <stdio.h>

long long int factorial(int n);

int main(void)
{
    int n;
    do
    {
        printf("n: ");
        while (scanf("%d", &n) != 1 || n < 0)
        {
            printf("Invalid input. Please enter a non-negative number: ");
            while (getchar() != '\n')
                ;
        }
    } while (n < 0);

    printf("%lld\n", factorial(n));
}

long long int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return (long long int)n * factorial(n - 1);
}