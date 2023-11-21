// Problem Statement : Write a program which accepts number from user and check whether it contains zero or not.

# include <stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{   
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("Given number contains zero. \n");
    }
    else
    {
        printf("Given number does not contains zero. \n");
    }

    return 0;
}