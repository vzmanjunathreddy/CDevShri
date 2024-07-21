/*
While loop
break ;
Continue;
do While

  // 1 true
    // 0 false
*/

#include<stdio.h>

int main()
{

    int number=10;
    int i=1;


 while(number>=1){

    printf("%d ",number);
    number--;
 }
  

    // while(i<=number)
    // {
    //     printf("Welcome C Programing \n ");
    //     i++;
    // }
    
    //Cntrl+ K + C
    //Cntrl + K +U 
    // for(int i =1;i<=number;i++)
    // {
    //     printf("%d \n",i);
    // }


}

// 10 9 8 7...1
// 2 4 6 8 10 12 14 16 18 20
// 0 1 1 2 3 5 8 13 21....
// Sum of digits using while loop ==>sumofDigits= sumofDigits + rem  rem(%10) , and deivide by  10 number =23654 =2+3+6+5+4=20