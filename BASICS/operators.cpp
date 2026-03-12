#include <iostream>
#include <string>

int main (){
    int a;
    int b;

    std::cout << "Enter the first int: " << std::endl;
    std::cin >> a;
    std::cout << "Enter the second int: " << std::endl;
    std::cin >> b;

    std::cout << "The sum of " << a << " and " << b << " is: " << a + b << std::endl; // Print the sum of a and b to the console
    std::cout << "The difference of " << a << " and " << b << " is: " << a - b << std::endl;
    std::cout << "The product of " << a << " and " << b << " is: " << a * b << std::endl;
    std::cout << "The division of " << a << " and " << b << " is: " << a / b << std::endl;
    std::cout << "The remainder of " << a << " and " << b << " is: " << a % b << std::endl;


}