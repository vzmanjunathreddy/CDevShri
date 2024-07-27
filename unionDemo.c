#include<stdio.h>
#include<string.h>

union Book
{
   char title[20];
   char author[30]; 
   double price;
   int numberofpages;
};

int main(){

union Book book, book1;

strcpy(book.title,"Alice in Wonderland");
printf("Tite of the book is %s \n", book.title);
strcpy(book.author,"Shri...");
printf("Author of the book is %s \n ", book.author);
book.price=250.45;
printf("Price of the book is %lf \n", book.price);



strcpy(book1.title,"Alice in Wonderland");
strcpy(book1.author,"Shri...");
book1.price=250.45;

printf("Author of the book is %s \n ", book1.author);
printf("Tite of the book is %s \n", book1.title);
printf("Price of the book is %lf \n", book1.price);


}