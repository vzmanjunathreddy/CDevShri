#include<stdio.h>

int main(){

    int rows , cols;

    int a[10][10],b[10][10], sum[10][10];

    printf("Enter number of rows ");
    scanf(" %d",&rows);
    printf("Enter number of Columns ");
    scanf(" %d",&cols);


  // Get the elements inside first array
    printf("Enter the first array elements \n ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
               
                 scanf(" %d" , &a[i][j]);
        }
    }

      // Display ements inside first array
    printf("First array elements \n ");
    for(int i=0;i<rows;i++){
        printf("\n");
        for(int j=0;j<cols;j++){
               
            printf(" %d" , a[i][j]);
        }
    }


  // Get the elements inside second array

  printf(" \n Enter the second array elements \n ");

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
                 scanf(" %d" ,&b[i][j]);
        }
    }
 
 
      // Display ements inside first array
    printf("\n Second array elements \n ");
    for(int i=0;i<rows;i++){

      printf("\n");

        for(int j=0;j<cols;j++){
               
            printf(" %d  " , b[i][j]);
        }
    }

   
     // Add the elements of first arrary and second array
     
         printf("\n Substraction of the  array elements is \n ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
   
          sum[i][j]= a[i][j]-b[i][j];
        }
    }
 
    for(int i=0;i<rows;i++){

        printf("\n");

        for(int j=0;j<cols;j++){
   
          printf("%d \t", sum[i][j]);
        }
    }
 
}