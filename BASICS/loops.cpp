#include <iostream>
//int num;
//FOR LOOP
/* for (initialization; condition; update) {
    // code that repeats
} */
int main () {
//Question 1: Write a program that prints: 1 2 3 4 5 6 7 8 9 10
/*for( num = 1; num <= 10; num++) {
    std::cout << num << " " << std::endl; 
}*/

//WHILE LOOP
/* while (condition) {
    // code that repeats
} */

//Question 2: Write a program that asks the user for a number N and prints numbers from 1 to N using a while loop.

/*    std::cout <<"Enter number: ";
    std::cin >> num;

    int num1 = 1;

    while(num1 <= num) {
        std::cout << num1 << " ";
        num1++;
    } */


//DO-WHILE LOOP
/* do {
    // code runs first
} while (condition); */

//Write a program that prints: 1 2 3 4 5 6 7 8 9 10 using a for loop.
for (int i = 1; i <= 10; i++){
    std::cout << i << " " << std::endl;
}

/*Write a program that asks the user for a number N and prints numbers from 1 to N using a while loop.
Example:
Input: 5
Output: 1 2 3 4 5*/
 int N;
 int num3 = 1;
 std::cout << "Enter a number: ";
 std::cin >> N;
 
 std::cout << "Input: " << N << std::endl;

 std::cout << "Output: ";
 while (num3 <= N){
    std::cout << num3 << " ";
    num3++;
 }

/*Question 3
Write a program that keeps asking the user to enter a number until they enter 0.
Hint:
Enter number: 7
Enter number: 3
Enter number: 10
Enter number: 0
Program stops*/
int num;

do {
    std::cout << "Enter number: ";
    std::cin >> num;
    std::cout << "You entered: " << num << std::endl;
    
} while (num != 0);
std::cout << "Program stops.";
//print numbers from 1 to the entered number and at the end, print whether the entered number is real or not.
/*int num2;
std::cout << "Enter a number: ";
std::cin >> num2;

for(int i = 1; i <=num2; i++){
    std::cout << i << " " << std::endl;
}

if(num2 % 2 == 0){
    std::cout << "Even" << std::endl;
} else {
    std::cout << "Odd" << std::endl;
} */

//modify so that it prints only even numbers from 1 to the input
/*int input;
std::cout << "Enter input: " << std::endl;
std::cin >> input;

std::cout << "Input: " << input << std::endl;
std::cout << "Output: " << std::endl;

for(int i = 2; i <= input; i += 2){
    std::cout << i << std::endl;
}

if(input % 2 == 0){
    std::cout << "Even" << std::endl;
} else {
    std::cout << "Odd" << std::endl; 
}

//modify the code so that it prints all numbers from 1 to input and write Even or Odd next to each number
int num2;
std::cout << "Enter a number: ";
std::cin >> num2;

for(int i = 1; i <=num2; i++){
    std::cout << i << "-";
    
if(i % 2 == 0){
    std::cout << "Even" << std::endl;
} else {
    std::cout << "Odd" << std::endl;
} } */

return 0;

}
