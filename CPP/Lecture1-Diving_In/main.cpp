#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Number1" << std::endl;
    std::cout << "Number2" << std::endl;
    std::cout << "Number3" << std::endl;

    std::cout << std::endl;

    int n = 10;

    for (int i = 1; i <= n; ++i)
    {
        std::cout << i << ": "
                  << "Raul" << std::endl;
    }

    return 0;
}