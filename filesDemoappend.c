#include<stdio.h>
#include<stdlib.h>
 
 int main(){

    FILE *fp; // declare 
    char nameoftheStudent[20];
    int age;
    int numberOfStudents;

    fp=fopen("D:\\2024\\myfiles\\studentsinfo.txt","a"); // initialize
    if(fp==NULL)
    {

        printf("No such file or directory exists");
        exit(1);
    }
    printf("Enter the number of Students");
    scanf("%d",&numberOfStudents);
    for(int i=0;i<numberOfStudents;i++)
    {
        printf("Enter the name of the Student ");
        scanf("%s", nameoftheStudent);   
        printf("Enter the age of the Student \n");
        scanf("%d",&age);
        fprintf(fp,"Name of the Student is : %s \t Age is : %d \n",nameoftheStudent,age); // writing the data to the file
    }
    fclose(fp);

 }