#include <iostream>
#include <string>

using namespace std;

int main()
{
    float x;
    float y;
    string operand;

    cout << "Enter an operand (+, -, *, /): ";
    cin >> operand;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    switch (operand[0])
    {
    case '+':
        cout << x + y << endl;
        break;
    case '-':
        cout << x - y << endl;
        break;
    case '*':
        cout << x * y << endl;
        break;
    case '/':
        cout << x / y << endl;
        break;
    default:
        cout << "Invalid operand" << endl;
    }

    return 0;
}