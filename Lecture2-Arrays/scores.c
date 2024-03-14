#include <stdio.h>

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

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float)N);

    return 0;
}