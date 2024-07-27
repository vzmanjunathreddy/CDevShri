#include <stdio.h>
#include <string.h>

struct Book
{
   char title[20];
   char author[30]; 
   double price;
   int numberofpages;
};


void displayBookdetails(struct Book mybook[2]);

int main(){

    struct Book mybook[2];
    strcpy(mybook[0].author,"Shri");
    strcpy(mybook[0].title,"Welcome to Maldives");
    mybook[0].price=250.35;
    mybook[0].numberofpages=200;

    strcpy(mybook[1].author,"Shri");
    strcpy(mybook[1].title,"Alice in Wonderland");
    mybook[1].price=650.35;
    mybook[1].numberofpages=400;

    displayBookdetails(mybook); // passing struct as parameter to other functions
}


void displayBookdetails(struct Book mybook1[2])
{

    for(int i=0;i<2;i++)
    {
    printf("\n Book title is  %s", mybook1[i].title);
    printf("\n  Book Author is  %s", mybook1[i].author);
    printf("\n Book price is  %lf", mybook1[i].price);
    printf("\n Number of pages in the book are  %d", mybook1[i].numberofpages);

    }



}

// struct to caluclate the are of Rectangle which you need to pass struct as pameter and should return area of rectange

// use structure ==>  a method should return a struct to main function which should calculate the area of rectange

// creae a struct of 10 students to store details like Name, age , City, Subj1, subj2, Subj3 , Ave=sub1+subj2+subj3,Grade ,  separate function

