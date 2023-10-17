// Problem Statement : Write a program which accepts number from user and print that number of $ and * on screen

#include <stdio.h>

void Pattern (int iNo)
{
    auto int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}