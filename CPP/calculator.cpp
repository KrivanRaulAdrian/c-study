#include <iostream>
#include <string>

int main()
{
    double x;
    double y;
    std::string operand;

    std::cout << "Enter an operand (+, -, *, /): ";
    std::cin >> operand;

    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout << "Enter y: ";
    std::cin >> y;

    switch (operand[0])
    {
    case '+':
        std::cout << x + y << std::endl;
        break;
    case '-':
        std::cout << x - y << std::endl;
        break;
    case '*':
        std::cout << x * y << std::endl;
        break;
    case '/':
        std::cout << x / y << std::endl;
        break;
    default:
        std::cout << "Invalid operand" << std::endl;
    }

    return 0;
}