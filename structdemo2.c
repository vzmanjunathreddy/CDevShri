#include <stdio.h>
#include <string.h>

struct Book
{
   char title[20];
   char author[30];
   double price;
   int numberofpages;
};

int main(){

    struct Book mybook,mynewbook;

    strcpy(mybook.author,"Shri");
    strcpy(mybook.title,"Welcome to Maldives");
    mybook.price=250.35;
    mybook.numberofpages=200;

    mynewbook=mybook;
    printf("\n New Book title is  %s", mynewbook.title);
    
    printf("\n OLD  Book title is  %s", mybook.title);

    printf("\nNew  Book Author is  %s", mybook.author);
    printf("\n Book price is  %lf", mybook.price);
    printf("\n Number of pages in the book are  %d", mybook.numberofpages);

     printf("\n Size of  char is %d",sizeof(char));
     printf("\n Size of  double is %d",sizeof(double));
     printf("\n Size of  int is %d",sizeof(int));
     printf("\n Size of  struct is %d",sizeof(mybook));



  
}




