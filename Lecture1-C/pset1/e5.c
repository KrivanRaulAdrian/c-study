#include <stdio.h>

int main(void)
{
    float change_owed;

    do
    {
        printf("Change owed: ");
        scanf("%f", &change_owed);

    } while (change_owed < 0 || getchar() != '\n');

    int cents = (int)(change_owed * 1 + 0.5);

    int quarters = 25, dimes = 10, nickels = 5, pennies = 1;

    int num_coins = 0;

    num_coins += cents / quarters;
    cents %= quarters;

    num_coins += cents / dimes;
    cents %= dimes;

    num_coins += cents / nickels;
    cents %= nickels;

    num_coins += cents;

    printf("%d\n", num_coins);

    return 0;
}
