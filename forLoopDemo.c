#include<stdio.h>

void main(){
    
    int number;
    printf("Welcome to for loop conditon");
    printf("Enter the number to print Multiple table");
    scanf("%d",&number);

    for(int i=1;i<=10;i++){

        printf("%d * %d = %d \n", number,i,number*i);
       
    }
}

// Accept the input number to find sum 
// ex: 10 then find sum of first numbers for loop
