// Problem Statement : Write a program which accepts a number from user and if number is less than 50 then
//                     print small , if it is greater than 50 and less than 100 then print medium and , if
//                     it is greater than 100 then print large

#include<stdio.h>

void Number (int iNo)
{
    if(iNo < 50)
    {
        printf("Small \n");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium \n");
    }
    else
    {
        printf("Large \n");
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}