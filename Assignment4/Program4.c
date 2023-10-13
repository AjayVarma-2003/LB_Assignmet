// Problem Statement : Write a program which accepts number from user and return summation of all its non factors

#include <stdio.h>

int SumNonFact(int iNo)
{
    auto int iCnt = 0;
    auto int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum += iCnt;
        }
    }

    return iSum;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}