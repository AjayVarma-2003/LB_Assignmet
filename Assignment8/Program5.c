// Problem Statement : Write a program which returns differences between EVEN factorial and odd factorial of given number 

// Problem Statement : Write a program to find even factorial of given number

#include <stdio.h>

int FactorialDiff (int iNo)
{
    auto int iCnt = 0;
    auto int iMultiple1 = 1;
    auto int iMultiple2 = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iMultiple1 *= iCnt;
        }
        if(iCnt % 2 != 0)
        {
            iMultiple2 *= iCnt;
        }
    }
    return iMultiple1 - iMultiple2;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}