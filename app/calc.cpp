#include <iostream> 

int main() 
{ 
    int first_number;
    int second_number;
    int result_of_numbers;

    std::cout << "Enter the first number : "; std::cin >> first_number;
    std::cout << "Enter the second number : "; std::cin >> second_number; 
    result_of_numbers = first_number + second_number; 
    std::cout << "Sum of numbers is : " << result_of_numbers << std::endl;
    return 0; 
}