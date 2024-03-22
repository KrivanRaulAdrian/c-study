#include <stdio.h>

void fizz_buzz();

int main(void)
{
    fizz_buzz();
}

void fizz_buzz()
{
    int n = 100;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d: FizzBuzz\n", i);
        }
        else if (i % 3 == 0)
        {
            printf("%d: Fizz\n", i);
        }
        else if (i % 5 == 0)
        {
            printf("%d: Buzz\n", i);
        }
        else
        {
            printf("%d:\n", i);
        }
    }
}