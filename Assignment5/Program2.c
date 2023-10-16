// Problem Statement : Write a program which accepts one number from user and check whether that number is greater than 100 or not

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNO)
{
    if (iNO >= 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    auto int iValue = 0;
    auto BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}