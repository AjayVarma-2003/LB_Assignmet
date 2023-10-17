// Problem Statement : Write a program which accepts number from user and prints its number lines

#include <stdio.h>

void Display(int iNo)
{
    auto int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}