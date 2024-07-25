#include <stdio.h>

struct Book
{
   char title[20];
   char author[30];
   double price;
   int numberofpages;
};

int main(){

    struct Book mybook={"My Discoveries","Shri Poorna",450.34,200};

    printf("\n Book title is  %s", mybook.title);
    printf("\n Book Author is  %s", mybook.author);
    printf("\n Book price is  %lf", mybook.price);
    printf("\n Number of pages in the book are  %d", mybook.numberofpages);

     printf("\n Size of  char is %d",sizeof(char));
      printf("\n Size of  double is %d",sizeof(double));
       printf("\n Size of  int is %d",sizeof(int));
    printf("\n Size of  struct is %d",sizeof(mybook));
  
}




