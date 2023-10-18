// Problem Statement : write a program to find odd factorial of number

#include <stdio.h>

int OddFactorial (int iNo)
{
    auto int iCnt = 0;
    auto int iMultiple = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
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

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is %d",iRet);

    return 0;
}