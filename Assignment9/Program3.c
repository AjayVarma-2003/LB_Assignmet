// Problem Statement : Write a program which accepts distance in kilometers and convert them into meters

#include <stdio.h>

int KMToMeter(int iNo)
{
    auto int iMeters = 0;

    iMeters = 1000 * iNo;

    return iMeters;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the distance : ");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("%d ",iRet);

    return 0;
}

// Time complexity : O(1) as it is doing one specific task without iterating and  
//                   it performs a fixed number of operations regardless of the input size.