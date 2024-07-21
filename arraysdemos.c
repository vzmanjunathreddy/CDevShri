#include<stdio.h>

//Sum of all the elements inside the array

// Average of all the elements

int main(){

    int marks[6]={40,30,20,60,80,44},size=3,sum=0;
    int average;

    int largestnumber=marks[0];

    for(int i=1;i<6;i++){

        if(marks[i]>largestnumber){
            largestnumber=marks[i];
        }
    }
    printf("Enter the Elements inside the Arrary of size less than or equal to 5  \n");

    scanf("%d",&size);

    // for(int i=0;i<size;i++){

    //     printf("Enter the array value : ");
    //     scanf("%d ",&marks[i]);
    // }

    for(int i=0;i<size;i++){

        sum= sum+marks[i];
    }

 // type casting --> converting from one type to other.

    average= sum/size;
    printf("sum of Marks is %d  \n ",sum );
    printf("aveverage of total marks is %d  ",average);

}

// input 5 values inside the array and find out largest element and smallest one
// input 5 values add two duplicate values print those duplicates
// pass array of marks to the function and function should return sum and based on the sum you need to calculate the ave in the main function

marks[0]=100;
marks[1]=100;
marks[2]=300;
marks[3]=300;
marks[4]=600;
