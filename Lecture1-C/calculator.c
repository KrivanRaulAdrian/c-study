#include <stdio.h>

int main(void)
{
    long int x;
    printf("x: ");
    scanf("%li", &x);

    long int y;
    printf("y: ");
    scanf("%li", &y);

    printf("%li\n", x + y);

    printf("\n");

    long a;
    printf("a: ");
    scanf("%li", &a);

    long b;
    printf("b: ");
    scanf("%li", &b);

    float z = (float)a / (float)b;
    printf("%.20f\n", z);

    printf("\n");

    long c;
    printf("c: ");
    scanf("%li", &c);

    long d;
    printf("d: ");
    scanf("%li", &d);

    double e = (double)c / (double)d;
    printf("%.20f\n", e);

    return 0;
}