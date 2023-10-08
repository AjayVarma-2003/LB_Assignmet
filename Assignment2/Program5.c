// Accept the number from user and check whether number is even or odd

#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("It is even number");
    }
    else
    {
        printf("It is odd number");
    }

    return 0;
}