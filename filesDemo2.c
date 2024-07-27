#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    int numberofYears;

    fp=fopen("D:\\2024\\myfiles\\mylearnings.txt","w");

   if(fp==NULL)
   {
    printf("There is no such file exists ");
    exit(1);
   }
   printf("Enter number of Years: ");
   scanf("%d",&numberofYears);

   fprintf(fp,"%d",numberofYears);
   printf("Data hasbeen writted to the file");
   fclose(fp);

}