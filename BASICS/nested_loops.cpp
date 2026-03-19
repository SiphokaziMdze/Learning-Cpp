#include <iostream>

//NESTED LOOPS: A loop inside another loop. The inner loop controls the rows and the outer loop loop controls the columns.

int main () {
    //QUESTION 1:
    /*Print:
     1
     12
     123
     1234 */

    int num = 4;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            std::cout << j;
        }
        std::cout << std::endl;
    }
    

    //QUESTION 2:
    /* Print:
        ****
        ***
        **
        * */

        for(int i = 4; i >= 1; i--){
            for(int j = 1; j <= i; j++){
                std::cout << "*  ";
            }
            std::cout << std::endl;
        }
        

    //QUESTION 3:
    /*
     Print:
     1
     22
     333
     4444
    */
    
       for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            std::cout << i;
        }
        std::cout << std::endl; 
       }

    //QUESTION 4:
    /*
     Print:
         *
        **
       ***
      ****
    */


       for (int i = 1; i <= num; i++){ 

        for(int j = 1; j <= num - i; j++) {
            std::cout << " "; }

            for(int j = 1; j <= i; j++){
                std::cout << "*";
            }

            std::cout << std::endl;
       }

        return 0;



    } 