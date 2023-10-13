// Problem Statement : Write a program which accepts number from user and display its multiplication factor

#include <stdio.h>

int MultFact(int iNo)
{
    auto int iMult = 1;
    auto int iCNt = 0;

    for (int iCnt = 1; iCnt<= (iNo/2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    
    return iMult;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}