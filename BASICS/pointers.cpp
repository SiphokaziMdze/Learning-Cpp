#include <iostream>

//POINTERS: A pointer is a variable that stores the memory address of another variable. It allows us to indirectly access and manipulate the value stored at that memory address.   

    void swap(int* a, int* b){
        
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
    }

int main() {
    int a = 5;
    int b = 10;
/*
Question 1

Create a variable and a pointer:
int num = 25;
Print:
value of num
address of num
value using pointer
*/
    int num = 25;
    int* ptr = &num;
    

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;

    std::cout << "Value at pointer: " << *ptr << std::endl;
    

/*
Question 2

Change the value using the pointer:
*ptr = 50;
Then print num
*/

    *ptr = 50;
    std::cout << "Changed value of num: " << num << std::endl;

    /*
    Swap Two Numbers Using Pointers

    Example:
    Before: a = 5, b = 10
    After:  a = 10, b = 5
    */

    swap(&a, &b);

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;   

    return 0;
}


