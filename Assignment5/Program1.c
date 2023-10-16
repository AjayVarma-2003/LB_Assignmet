// Problem Statement : Write program form user which accepts name from user and print that name

#include <stdio.h>

int main()
{
    char Name[30];
    
    printf("Please enter your full name : ");
    scanf(" %[^\n]s ",Name);                    // Sir i got this solution on gfg 

    printf("Your name is %s\n",Name);

    return 0;
}