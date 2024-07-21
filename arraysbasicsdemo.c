#include<stdio.h>
int main(){

    int marks[10];

    marks[0]=101;
    marks[1]=102;
    marks[2]=103;
    marks[3]=104;
    marks[4]=105;

    for(int i=0;i<10;i++){

        printf("Element at index marks[%d] is %d \n",i,marks[i]);
    }

}