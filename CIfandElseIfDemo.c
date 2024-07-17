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
    scanf("%d",&totalMarks);
    printf("\n Total Marks are %d",totalMarks);
        if(totalMarks>=900){
            printf("You have secured A+ grade");
        }
        else if(totalMarks >=800 && totalMarks<900)
        {
            printf("\n You have secured A grade");
        }
        else if(totalMarks >=600 && totalMarks<800)
        {
            printf("\n You have secured B+ grade");
        }
        else if(totalMarks >=400 && totalMarks<600)
        {
            printf("\n  You have secured B grade");
        }
        else{
            printf("\n  Sorry your were not able to clear the exam...");
        }
        
    }



