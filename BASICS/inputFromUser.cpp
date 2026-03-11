#include <iostream> // Include the iostream library for input and output operations
#include <string> // Include the string library to use the std::string type

/* int main() {
    std::string name; // Declare a string variable named 'name' to store the user's name
    int age; // Declare an integer variable named 'age' to store the user's age

    std::cout <<"Enter your name: "; // Prompt the user to enter their name
    std::cin >> name;

    std::cout <<"Enter your age: "; // Prompt the user to enter their age
    std::cin >> age;

    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl; // Print a greeting message that includes the user's name and age
    
    return 0; // Return 0 to indicate that the program ended successfully
} */

// QUIZ: 
//1. Write a program that asks the user for their favorite number and print "Your favorite number is X".
//2. Declare a variable for temperature as float and print it.
//3. Add comments explaining each line of your program.

int main(){
    
    int favNumber; // Declare an integer variable named 'favNumber' to store the user's favorite number
    std::cout << "What is your favorite number? " << std::endl;
    std:: cin >> favNumber;

    std::cout << "Your favorite number is " << favNumber << std::endl; // Print the user's favorite number to the console

    float temperature = 36.6; // Declare a float variable named 'temperature' and initialize it with the value 36.6
    std::cout << "The temperature is " << temperature << " degrees Celsius." << std::endl; // Print the temperature to the console with a unit
}