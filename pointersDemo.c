#include<stdio.h>

int main(){

    int x =10;
    //pointer ==> variable which stores the address of anonther varaible
    int *y;// declaration of pointer is with *

    y=&x;
  
    printf("Value of x is %d \n",x);
    printf("Address of x is %d \n",&x);
    
    printf("value of y is %d \n",y);
    printf("Value present at pointer varaible %d \n",*y);
    *y=20;
    printf("value updated at the address of x of and new value is %d",x);

    
    


    
}