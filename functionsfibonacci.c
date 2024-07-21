#include<stdio.h>

// 0,1,1,2,3

int main()
{
    int firstNumber=0,  secondNumber =1,thridNumber;

    int numberOfElements=5;

    printf("%d  %d ",firstNumber,secondNumber);

    for(int i=2;i<numberOfElements;i++){

        thridNumber=firstNumber + secondNumber;
        printf("%d  ",thridNumber);

        firstNumber=secondNumber;
        secondNumber=thridNumber;
    }

//Calling a function by itself;
}