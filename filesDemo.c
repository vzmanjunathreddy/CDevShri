#include <stdio.h>

int main(){

    FILE *fp;

   // fp=fopen("name of file","Operation");

   fp=fopen("D:\\2024\\myfiles\\mylearningsasdfasdf.txt","r+");

   if(fp==NULL)
   {
    printf("There is no such file exists ");

   }
   else{

    printf("File with name exists");
   }
}