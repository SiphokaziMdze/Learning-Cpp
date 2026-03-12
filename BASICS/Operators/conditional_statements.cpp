#include <iostream>

/* c++
if (condition) {
    // code to execute if condition is true
} else {
    // code to execute if condition is false
    }
*/

//QUIZ:
//Question 1

int number;

int main() {
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;

    if(number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    }
}