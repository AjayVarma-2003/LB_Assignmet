// Problem Statement : Write a program which accepts temperature in Farehnite and convert it into celsius.

#include <stdio.h>

double FhtoCs (float fNo)
{
    auto double dMeasure = 0.0;

    dMeasure = ((fNo -32.0) * (5.0/9.0));
    
    return dMeasure;
}

int main()
{
    auto float fValue = 0.0;
    auto double dRet = 0.0;

    printf("Enter the temperature in the Farehnite : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in the celsius is : %f", dRet);

    return 0;
}

// Time complexity : O(1) as it is doing one specific task without iterating and  
//                   it performs a fixed number of operations regardless of the input size.