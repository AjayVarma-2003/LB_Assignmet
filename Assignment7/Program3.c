// Problem Statement : Write a program to find a factorial of given number

#include <stdio.h>

int Factorial (int iNo)
{
    auto int iCnt = 0;
    auto int iMultiply = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt --)
    {
        iMultiply *= iCnt;
    }
    return iMultiply;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    
    printf("The factorial of the number is : %d",iRet);

    return 0;
}