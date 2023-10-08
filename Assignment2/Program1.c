// Accept one user from user and print that number of* on screen

#include <stdio.h>

void Accept(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}