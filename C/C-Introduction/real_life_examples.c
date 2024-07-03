#include <stdio.h>

int main()
{
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 72.25;
    char studentGrade = 'B';

    printf("Student ID: %d\n", studentID);
    printf("Student Age: %d\n", studentAge);
    printf("Student Fee: %f\n", studentFee);
    printf("Student Grade: %c\n", studentGrade);

    printf("\n");

    int length = 4;
    int width = 6;
    int area;

    area = length * width;

    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of the rectangle is: %d\n", area);

    return 0;
}