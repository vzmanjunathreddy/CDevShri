#include <stdio.h>

void main(){

    int number=5;
    for(int i =1;i<=number;i++){
     
      for(int j=i;j>=1;j--)
      {
        printf(" %d   " , j);
      }
      printf("\n");
    }

}
