// Problem Statement : Write a program which accepts range of user and return addition of all even numbers in between that range

#include <stdio.h>

int CalculateSumInRangeEven(int istart, int iend)
{
    auto int isum = 0;

    if (iend >= istart)
    {
        for (int i = istart; i <= iend; i++)
        {
            if (istart < 0 || iend < 0)
            {
                printf("Invalid range\n");
                break;
            }
            if (i % 2 == 0)
            {
                isum += i;
            }
        }
    }

    return isum;
}

int main()
{
    auto int iValue1, iValue2, iRet = 0;

    printf("Enter the start of the range: ");
    scanf("%d", &iValue1);

    printf("Enter the end of the range: ");
    scanf("%d", &iValue2);

    iRet = CalculateSumInRangeEven(iValue1, iValue2);

    if (iValue2 >= iValue1)
    {
        printf("The sum of numbers from %d to %d is: %d\n", iValue1, iValue2, iRet);
    }
    else
    {
        printf("Invalid range.\n");
    }

    return 0;
}

// Time complexity : O(n)