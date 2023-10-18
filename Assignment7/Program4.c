// Problem Statement : Write a program which accepts a number from user and display its table

#include <stdio.h>

void Table(int iNo)
{
    auto int iCnt = 0;
    auto int iTable = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iTable += iNo;
        printf("%d ",iTable);
    }
}

int main()
{
    auto int iValue = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}