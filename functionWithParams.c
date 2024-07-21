#include <stdio.h>

void biggestOfTwoNumbers(int x, int  y); // declaration of function

int main(){
    
    int firstNumber=100;
    int secondNumber=300;

biggestOfTwoNumbers(firstNumber,secondNumber);

}

void biggestOfTwoNumbers(int x, int  y){ // defination

    int firstNumber=100;
    int secondNumber=300;
    
   
    if(firstNumber>secondNumber)
    {
        printf("FirstNumber : %d is greater than second Number %d",100,300);
    }
    else{
        printf("SecondNumber : %d is greater than First Number %d",300,100);
    }

}