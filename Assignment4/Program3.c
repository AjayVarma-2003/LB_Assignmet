// Problem Statement : Write a program which accepts number from user and display its non factors 

#include <stdio.h>

void NonFact(int iNo)
{
    auto int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    NonFact(iValue);

    return 0;
}