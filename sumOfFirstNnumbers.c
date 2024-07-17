#include <stdio.h>

void main(){

    int number=5;
    int sumofNnaturalNumbers=0;
    printf("enter the Number to find sum ");
    //scanf("%d",&number);
    for(int i =1; i<=number;i++)
    {

        //sumofNnaturalNumbers=sumofNnaturalNumbers+i;

        sumofNnaturalNumbers+=i;
        
    }

    printf("sum of firstNnaturalNumber is %d",sumofNnaturalNumbers);
}

// 5+4+3+2+1

// print sum of first n even numbers ==> n is the input
// print n prime numbers and disply the  sum of first n prime numbers ==> n is the input