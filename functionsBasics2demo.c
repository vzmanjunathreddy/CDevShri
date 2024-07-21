#include <stdio.h>

int sumofTwoNumbers();
int main(){

int result;
result=sumofTwoNumbers();
 printf("Sum of two numbers is %d",result);

}

int sumofTwoNumbers(){  
    int firstNumber=100;
    int secondNumber=300;
   return firstNumber +secondNumber;
}

