#include <stdio.h>

long long get_long(const char *prompt)
{
    printf("%s", prompt);
    long long input;
    scanf("%lld", &input);
    return input;
}

int main(void)
{
    long long card_number;

    do
    {
        card_number = get_long("Number: ");
    } while (card_number <= 0);

    int sum = 0;
    int digit_count = 0;
    long long temp = card_number;

    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit_count % 2 == 0)
        {
            sum += digit;
        }
        else
        {
            int product = digit * 2;
            sum += product / 10 + product % 10;
        }
        temp /= 10;
        digit_count++;
    }

    if (sum % 10 == 0)
    {
        temp = card_number;
        while (temp >= 100)
        {
            temp /= 10;
        }
        if ((temp == 34 || temp == 37) && digit_count == 15)
        {
            printf("AMEX\n");
        }
        else if ((temp >= 51 && temp <= 55) && digit_count == 16)
        {
            printf("MASTERCARD\n");
        }
        else if ((temp >= 40 && temp <= 49) && (digit_count == 13 || digit_count == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
