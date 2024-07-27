#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
 struct Student{

    char nameoftheStudent[30];
    int age;
 };
 int main(){

    FILE *fp; // declare 
    struct Student stds[5],stds1[5];

    fp=fopen("D:\\2024\\myfiles\\studentsinfo2.bin","wb+"); // initialize
    if(fp==NULL)
    {
        printf("No such file or directory exists");
        exit(1);
    }

    for(int i=0;i<2;i++){

        printf("Enter the name of the Student ");
        scanf("%s", stds[i].nameoftheStudent);   

        printf("Enter the age of the Student \n");
        scanf("%d",&stds[i].age);
       
    }
    fwrite(stds,sizeof(stds),1,fp);
    // 
    fclose(fp);

    fp=fopen("D:\\2024\\myfiles\\studentsinfo2.bin","rb"); 

    fread(stds1,sizeof(stds1),1,fp);
    for(int i=0;i<2;i++){

    printf("Name of the student is %s and Age is %d",stds1[i].nameoftheStudent,stds1[i].age);
    fclose(fp);
    }

 }