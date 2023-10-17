// Problem Statement : Write a program which accepts number from user and and prints all odd numbers upto it

#include<stdio.h>

void OddDisplay(int iNo)
{
    auto int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
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

    OddDisplay(iValue);

    return 0;
}