#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
    const int N = 3;
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        printf("Score: ");
        while (scanf("%i", &scores[i]) != 1)
        {
            printf("Invalid input. Please enter a number: ");
            while (getchar() != '\n')
                ;
        }
    }

    printf("Average: %f\n", average(N, scores));

    return 0;
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float)length;
}