// Problem Statement : Write a program to find even factorial of given number

#include <stdio.h>

int EvenFactorial (int iNo)
{
    auto int iCnt = 0;
    auto int iMultiple = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iMultiple *= iCnt;
        }
    }
    return iMultiple;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}