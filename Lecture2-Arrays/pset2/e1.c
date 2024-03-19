#include <stdio.h>
#include <string.h>
#include <ctype.h>

int calculateScore(char *word);

int main()
{
    char word1[100], word2[100];

    printf("Player 1, enter your word: ");
    scanf("%s", word1);
    printf("Player 2, enter your word: ");
    scanf("%s", word2);

    int score1 = calculateScore(word1);
    int score2 = calculateScore(word2);

    if (score1 > score2)
        printf("Player 1 wins!\n");
    else if (score1 < score2)
        printf("Player 2 wins!\n");
    else
        printf("Tie!\n");

    return 0;
}

int calculateScore(char *word)
{
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int score = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isalpha(word[i]))
        {
            word[i] = tolower(word[i]);

            score += points[word[i] - 97];
        }
    }
    return score;
}