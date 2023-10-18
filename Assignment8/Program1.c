// Problem Statement : Write a program which accepts a number from user and display below pattern

#include <stdio.h>

void Display(int iNo)
{
    auto int iCnt = 0;

    if(iNo <0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }
    
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}