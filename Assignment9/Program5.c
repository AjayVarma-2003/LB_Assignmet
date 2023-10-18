// Problem Statement : Write a program which accepts area in square feet and convert it into square meter.

#include<stdio.h>

double SquareMeter(int iNo)
{
    auto double SqrFeet = 0.0;

    SqrFeet = ((double)iNo) * 0.0929;

    return SqrFeet;
}

int main()
{
    auto int iValue = 0;
    auto double dRet = 0.0;

    printf("Enter the area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %f",dRet);

    return 0;
}

// Time complexity : O(1) as it is doing one specific task without iterating and  
//                   it performs a fixed number of operations regardless of the input size.