// Problem Statement : Write a program which accept range from user and display all even numbers in between that range

#include <stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    auto int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;

    printf("Enter the two numbers : ");
    scanf("%d %d",&iValue1,&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

// Time complexity : O(n) 