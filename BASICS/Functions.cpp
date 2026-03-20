#include <iostream>

/*FUNCTIONS: A block of code that performs a specific task. It can be called multiple times in a program. Functions can take parameters and return values.
return_type function_name(parameters) {
    // code
}
*/

/*QUESTION 1: 
Create a function:

int findMin(int arr[], int size)
It should return the smallest number
*/

int findMin (int arr[], int size){
    
    
    int smallest_num = arr[0];

    for(int i = 1; i < size; i++){
        if(arr[i] < smallest_num){
            smallest_num = arr[i];
        }

    }

    return smallest_num;

}

/*
Question 2

Create a function:
double calculateAverage(int arr[], int size)
👉 It should return the average
*/

double calculateAverage(int arr[], int size){
    int sum = 0;
    double average = 0;

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    average = (double)sum / size;

    return average;
}

/*
Question 3

Create a function:
bool isEven(int num)
Returns:
true if even
false if od
*/

bool isEven(int num) {

    if(num % 2 == 0){
        return true;
    } else {
        return false;
    }

}

int main() {
    
    int arr[5] = {5, 67, 42, 9, 88};
    std::cout << "Smallest number: " << findMin(arr, 5) << std::endl;

    std::cout << "Average: " << calculateAverage(arr, 5);

    std::cout << "Is 5 even? " << std::boolalpha << isEven(5) << std::endl;
    std::cout << "Is 6 even? " << std::boolalpha << isEven(6) << std::endl;

    return 0;
}