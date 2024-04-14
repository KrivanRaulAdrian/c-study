#include <stdio.h>

int main(void)
{
    double x;
    double y;
    char operand;

    printf("operand: +, -, *, /: ");
    scanf("%c", &operand);

    printf("x: ");
    while (scanf("%lf", &x) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }
    printf("y: ");
    while (scanf("%lf", &y) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n')
            ;
    }

    switch (operand)
    {
    case '+':
        printf("%lf\n", x + y);
        break;
    case '-':
        printf("%lf\n", x - y);
        break;
    case '*':
        printf("%lf\n", x * y);
        break;
    case '/':
        printf("%lf\n", x / y);
        break;
    default:
        printf("Invalid operand.\n");
    }

    return 0;
}