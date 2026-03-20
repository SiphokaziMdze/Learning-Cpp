#include <iostream>
/*
Write a function:
int findMax(int arr[], int size);
Return the largest number
*/

int findMax(int arr[], int size){

    int max = arr[0];

    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main() {

    int arr[5] = {89, 65, 47, 3, 23};

    std::cout << "Max value = " << findMax(arr, 5);

    return 0;
}