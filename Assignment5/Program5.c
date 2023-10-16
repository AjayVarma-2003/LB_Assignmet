// Problem Statement : Write a program that accepts total marks and obtained marks from user and calculate percentage

#include <stdio.h>

float Percentage (int imarks, int itotal)
{
    auto float iResult = 0;

    if(imarks == 0 || itotal == 0)
    {
        printf("Invalid marks...");
    }

    iResult = (((float) imarks / (float) itotal) * 100);
    return iResult;
}

int main()
{
    auto int iMarks = 0;
    auto int iTotal = 0;
    auto float fRet = 0.0;

    printf("Enter the total marks : ");
    scanf("%d",&iTotal);

    printf("Enter the marks you obtained : ");
    scanf("%d",&iMarks);

    fRet = Percentage(iMarks, iTotal);

    printf("Your percentage is : %f\n",fRet); 

    return 0;
}