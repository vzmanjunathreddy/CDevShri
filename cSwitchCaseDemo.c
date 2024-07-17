/*  
Calculate the grade of Stundent based on the marks
Accept marks from each subject 
total marks =1000
marks 900 ==> A+ grade
Marks 800 to 900 ==> A grade
Marks 600 to 800==> B+ grade
Marks 400 to 600 ==> B grade
Marks <400== Fail
*/

#include <stdio.h>

int main(){

    int totalMarks;

    printf("enter the total marks achieved by the Student \n");
 //   scanf("%d",&totalMarks);
    totalMarks =800;
    printf("\n Total Marks are %d",totalMarks);

    switch (totalMarks)
    {

    case  900:
            printf("You have secured A+ grade");
        break;

    case  800:
            printf("You have secured A grade");
        break;
    case  600:
            printf("You have secured B+ grade");
        break;

    case  700:
            printf("You have secured B grade");
        break;
    default:
          printf("\n  Sorry your were not able to clear the exam...");
        break;
    }
        
    }
