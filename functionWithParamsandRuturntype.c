#include <stdio.h>

int sumofTwoNumbers(int x, int y); //declaration 

int main(){
    int firstNumber=100;
    int secondNumber=300;

int result=sumofTwoNumbers(firstNumber,secondNumber); // invoking the function
 printf("Sum of two numbers is %d",result);

}

int sumofTwoNumbers(int firstNumber, int secondNumber){  //defination

   int result= firstNumber +secondNumber;
   return result;
}

