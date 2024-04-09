#include <stdio.h>

void get_contact();

int main(void)
{
    get_contact();

    return 0;
}

void get_contact()
{
    char first_name[10];
    char last_name[10];
    int age;
    char phone_number[15];

    printf("Hello, what is your first name? ");
    scanf("%9s", first_name);

    printf("What is your last name? ");
    scanf("%9s", last_name);

    printf("How old are you? ");
    scanf("%u", &age);

    printf("What is your phone number? ");
    scanf("%14s", phone_number);

    printf("Your contact information are as follows: \n");
    printf("Full name: %s %s\n", first_name, last_name);
    printf("Age: %u\n", age);
    printf("Phone number: %s\n", phone_number);
}