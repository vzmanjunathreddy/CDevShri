#include<stdio.h>
void swapnumbers(int x, int y);
int main(){

    int a=10;
    int b=20;
    printf("Value of a before swap : %d \n",a);
    printf("Value of b before swap : %d \n",b);

    swapnumbers(a,b);

    printf("Value of a after swap : %d \n",a);
    printf("Value of b after swap : %d \n",b);
}

void swapnumbers(int x , int y){

    int temp;
    temp=x;
    x=y;
    y=temp;
    return;

}