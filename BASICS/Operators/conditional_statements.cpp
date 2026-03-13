#include <iostream>

/* c++
if (condition) {
    // code to execute if condition is true
} else {
    // code to execute if condition is false
    }
*/

//QUIZ:

int number;

int main() {
    //Question 1
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;

    if(number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    }

    //Question 2
    int age;
    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    if(age < 13) {
        std::cout << "Child" << std::endl;
    } else if (age >= 13 && age <= 19) {
        std::cout << "Teenager" << std::endl;
    } else if (age >= 20){
        std::cout << "Adult" << std::endl;
    }

    //Question 3
    int num;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> num;

    if(num % 2 == 0) {
        std::cout << "The number is even." << std::endl;
    } else {
        std::cout << "The number is odd." << std::endl;
    }
}

