#include<stdio.h>
#include<stdlib.h>
 
 int main(){

    FILE *fp; // declare 

    char nameoftheStudent[20];
    int age;

    int numberOfStudents;


    fp=fopen("D:\\2024\\myfiles\\studentsinfo.txt","r"); // initialize
    if(fp==NULL)
    {

        printf("No such file or directory exists");
        exit(1);
    }
 
   for(int i=0;i<2;i++){
    fscanf(fp,"%s %d",nameoftheStudent,&age);
    printf("Name of the student is %s ",nameoftheStudent );
    printf("Age of the student is %d  \n",age);
   } 
    fclose(fp);

 }