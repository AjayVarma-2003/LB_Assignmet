// Problem Statement : Write a program which accepts number from user and print even factors of that number 

// Conclusion : We have to print only even factors of number taken as input from user 

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= (iNo / 2);i++)
    {
        if((i % 2 == 0) && (iNo % i == 0))
        {
            printf("%d  ",i);
        }
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}