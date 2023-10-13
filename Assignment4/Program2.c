// Problem Statement : Write a program which accepts number from user and display its factors in decresing order

#include <stdio.h>

void FactRev(int iNo)
{
    auto int iCnt = 0;

    for(iCnt = (iNo / 2) ; iCnt >= 1;iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    FactRev(iValue);

    return 0;
}