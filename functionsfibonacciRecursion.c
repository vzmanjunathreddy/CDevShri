#include<stdio.h>

// 0,1,1,2,3
void displayFibonaiccSeries(int x);
int main()
{
    int firstNumber=0,  secondNumber =1,thridNumber;
    int numberOfElements=5;

    printf("%d  %d ",firstNumber,secondNumber);
    displayFibonaiccSeries(numberOfElements);

    }


//Calling a function by itself is recursion

void displayFibonaiccSeries(int numberOfElements)
{
 
 static int firstNumber=0,  secondNumber =1,thridNumber;

   if(numberOfElements>0){
        thridNumber=firstNumber + secondNumber;
        printf("%d  ",thridNumber);
        firstNumber=secondNumber;
        secondNumber=thridNumber;
        displayFibonaiccSeries(numberOfElements-1);
   }

}