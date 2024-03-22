#include <stdio.h>

void greet_user();

int main(void)
{
    greet_user();

    return 0;
}

void greet_user()
{
    char first_name[10];
    char last_name[10];
    int age;

    printf("Hello, what is your first name? ");
    scanf("%9s", first_name);

    printf("And your last name? ");
    scanf("%9s", last_name);

    printf("How old are you? ");
    scanf("%u", &age);

    printf("Hello, %s %s, you are %u years old.\n", first_name, last_name, age);
}