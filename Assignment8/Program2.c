// Problem Statement : Accept the amount in the US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees

#include <stdio.h>

int DollarToINR(int iNo)
{
    auto int iResult = 0;

    iResult = iNo * 70;

    return iResult;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}