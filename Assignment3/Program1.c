// Problem Statement : Write a program which accepts one number from user and print that number of even numbers on screen

// Conclusion : we have to take a number from user as input and print that much even numbers on screen

#include <stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    auto int iEvenNumbers = 2;

    for(int i = 1; i <= iNo; i++)
    {
        printf("%d  ", iEvenNumbers);
        iEvenNumbers += 2;
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}