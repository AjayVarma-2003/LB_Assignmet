// Problem Statement : Write a program which accepts three numbers and prints its multiplication

#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    auto int iResult = 0;

    if((iNo1 || iNo2 || iNo3) == 0)
    {
        return 0;
    }

    iResult = iNo1 * iNo2 * iNo3;

    return iResult;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iValue3 = 0;
    auto int iRet = 0;

    printf("Enter the three numbers : ");
    scanf("%d %d %d ",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of three numbers is %d",iRet);

    return 0;
}