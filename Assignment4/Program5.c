// Problem Statement : Write a program which accepts number from user and return difference between summation of all its factors and non factors

#include <stdio.h>

int FactDiff(int iNo)
{
    auto int iCnt = 0;
    auto int iNonFactSum = 0;
    auto int iFactSum = 0;
    auto int SumDiff = 0;

    for(iCnt = 1 ; iCnt <= (iNo / 2);iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iFactSum += iCnt;
        }
    }
    for(iCnt = 1; iCnt <= iNo ; iCnt ++)
    {
        if(iNo % iCnt != 0)
        {
            iNonFactSum += iCnt;
        }
    }

    SumDiff = iFactSum - iNonFactSum;

    return SumDiff;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}