#include <stdio.h>
#include <string.h>

struct Book
{
   char title[20];
   char author[30];
   double price;
   int numberofpages;
};
void displayBookdetails(struct Book mybook);

int main(){

    struct Book mybook,mynewbook;
    strcpy(mybook.author,"Shri");
    strcpy(mybook.title,"Welcome to Maldives");
    mybook.price=250.35;
    mybook.numberofpages=200;

    displayBookdetails(mybook); // passing struct as parameter to other functions
}


void displayBookdetails(struct Book mybook1)
{

    printf("\n Book title is  %s", mybook1.title);
    printf("\n  Book Author is  %s", mybook1.author);
    printf("\n Book price is  %lf", mybook1.price);
    printf("\n Number of pages in the book are  %d", mybook1.numberofpages);


}

// struct to caluclate the are of Rectangle which you need to pass struct as pameter and should return area of rectange

// use structure ==>  a method should return a struct to main function which should calculate the area of rectange


