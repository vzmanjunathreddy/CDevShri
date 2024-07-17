// IF condition : 
// Accept the input year from the user and check if year is a leap year
#include<stdio.h>
int main(){
    int year;
    int newyear;
    printf("Enter the year");
    //scanf("%d",&year);
    //newyear=year;
    year=100;
    printf("\n You have entered the year %d", newyear);
    
    if(year%4==0){
        printf("\n You have entered a leap year");
    }
    if(year%4!=0)
    {
        printf("\n You have not entered a leap year");
    }
   
}

