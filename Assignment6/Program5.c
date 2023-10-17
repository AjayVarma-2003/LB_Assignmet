// Problem Statement : Write a program which accepts number and then print 5 multiplies of number

# include <stdio.h>

void MultipleDisplay (int iNo)
{
    auto int iCnt = 0;
    auto int iMultiple = 0;

    for(iCnt = 1; iCnt <= 5; iCnt ++)
    {
        iMultiple = iNo * iCnt;
        printf("%d ",iMultiple);
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}