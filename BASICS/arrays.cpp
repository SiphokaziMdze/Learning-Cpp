#include <iostream>
int main() {
   //Question 1
   int arr[5] = {2, 4, 6, 8, 10};
   for(int i = 0; i < 5; i++){
      std::cout << arr[i] << " ";
     }
     std::cout << std::endl;
   //Question 2
   /*int arr1[5];
   int j;

   for(j = 0; j < 5; j++ ){
   std::cout << "Enter number: ";
   std::cin >> arr1[j]; }

   for(j = 0; j < 5; j++ ){
      std::cout << arr1[j] << " ";
   }*/

   //Question 3
   int arr2[5] = {2, 42, 69, 8, 10};
   int max = arr2[0];

   for(int i = 1; i < 5; i++){
      if(arr2[i] > max){
         max = arr2[i];
      }
   }
   std::cout << "Max number: " << max << " ";

   //Question 4
   int arr3[5] = {1, 2, 3, 4, 7};
   int sum = 0;
   for(int i = 0; i < 5; i++){
      sum += arr3[i];
   }
    std::cout << "Sum = " << sum << " ";

    double average = 0;
    average = sum / 5.0;

    std::cout << "Average = " << average << " ";
     return 0;
}