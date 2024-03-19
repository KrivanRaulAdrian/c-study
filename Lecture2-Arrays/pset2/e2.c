#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

float calculateAverageLetters(int letters, int words);
float calculateAverageSentences(int sentences, int words);
int calculateGradeLevel(float L, float S);

int main(void)
{
    printf("Text: ");
    char text[10000];
    fgets(text, sizeof(text), stdin);

    int length = strlen(text);
    int letters = 0, words = 0, sentences = 0;

    for (int i = 0; i < length; i++)
    {
        char c = text[i];

        if (isalpha(c))
        {
            letters++;
        }

        if (c == ' ' && (i == 0 || text[i - 1] != ' '))
        {
            words++;
        }

        if (c == '.' || c == '?' || c == '!')
        {
            sentences++;
        }
    }
    words++;

    float L = calculateAverageLetters(letters, words);
    float S = calculateAverageSentences(sentences, words);

    int gradeLevel = calculateGradeLevel(L, S);

    if (gradeLevel < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (gradeLevel >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", gradeLevel);
    }

    return 0;
}

float calculateAverageLetters(int letters, int words)
{
    return ((float)letters / (float)words) * 100;
}

float calculateAverageSentences(int sentences, int words)
{
    return ((float)sentences / (float)words) * 100;
}

int calculateGradeLevel(float L, float S)
{
    float index = 0.0588 * L - 0.296 * S - 15.8;

    int gradeLevel = round(index);

    return gradeLevel;
}
