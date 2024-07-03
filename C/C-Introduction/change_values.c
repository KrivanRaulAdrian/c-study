#include <stdio.h>

int main()
{
    int myNum = 15;
    printf("%d\n", myNum);

    myNum = 10;
    printf("%d\n", myNum);

    printf("\n");

    int myNumOne = 10;
    printf("%d\n", myNumOne);

    int myOtherNum = 23;
    printf("%d\n", myOtherNum);

    myNumOne = myOtherNum;
    printf("%d\n", myNumOne);

    printf("\n");

    int myNumTwo = 30;
    printf("%d\n", myNumTwo);
    int myOtherNumTwo;
    myOtherNumTwo = myNumTwo;
    printf("%d\n", myOtherNumTwo);

    printf("\n");

    int x = 5;
    int y = 10;
    int sum = x + y;
    printf("%d\n", sum);

    return 0;
}