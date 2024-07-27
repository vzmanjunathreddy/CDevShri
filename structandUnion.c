#include <stdio.h>

union UBook
{
   char title[20];
   char author[30]; 
   double price;
   int numberofpages;
} ubook;

struct SBook
{
   char title[20];
   char author[30]; 
   double price;
   int numberofpages;
} sbook;

int main(){

    printf("size of Struct is = %d bytes \n", sizeof(sbook));
    printf("size of unionis = %d bytes \n", sizeof(ubook));
}