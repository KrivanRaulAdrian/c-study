#include <iostream>

using namespace std;

int main()
{
    int age = 18;

    cout << "Please enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are old enough, you can enter" << endl;
    }
    else
    {
        cout << "You are too young, you cannot enter" << endl;
    }

    return 0;
}