#include <iostream>
#include <string>

int add_numbers(int first_number, int second_number);
std::string name(std::string first_name, std::string last_name);
int subtract_numbers(int first_number, int second_number);

int main()
{
    int first_number{12};
    int second_number{9};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    int sum = first_number + second_number;

    std::cout << "Sum: " << sum << std::endl;

    std::string first_name = "Raul";
    std::string last_name = "Krivan";

    std::cout << "Hello " << first_name << " " << last_name << std::endl;

    std::cout << "Sum: " << add_numbers(23, 8) << std::endl;

    std::cout << "Hello " << name("Denisa", "Krivan") << std::endl;
    std::cout << "Hello " << name("Monica", "Krivan") << std::endl;

    std::cout << "Difference: " << subtract_numbers(23, 8) << std::endl;

    return 0;
}

int add_numbers(int first_number, int second_number)
{
    int sum = first_number + second_number;
    return sum;
}

std::string name(std::string first_name, std::string last_name)
{
    std::string full_name = first_name + " " + last_name;
    return full_name;
}

int subtract_numbers(int first_number, int second_number)
{
    int diff = first_number - second_number;
    return diff;
}