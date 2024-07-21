#include <stdio.h>

int main()
{

    char name[]="ShriPoorna";

    for(int i=0;i<10;i++)
    {
        printf("%c \n",name[i]);
    }

    char namesOfUsers[3][15]={"Manjunath","ShriPoorna","Varnaaz"};
    
    for(int i=0;i<3;i++){

        printf("%s \n", namesOfUsers[i]);
    }


}