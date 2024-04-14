#include <iostream>

int main()
{
    int age = 18;

    std::cout << "Please enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "You are old enough, you can enter" << std::endl;
    }
    else
    {
        std::cout << "You are too young, you cannot enter" << std::endl;
    }

    return 0;
}