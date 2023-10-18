// Problem Statement : Write a program which accepts radius of circle from user and calculate its area.
//                     Consider value of PI as 3.14. (Area = PI * radius * radius)

#include <stdio.h>

double CircleArea(float fRadius)
{
    auto float fPI = 3.14;
    auto double dArea = 0.0;

    dArea = fPI * fRadius * fRadius;

    return dArea;
}

int main()
{
    auto float fValue = 0.0;
    auto double dRet = 0.0;

    printf("Enter the radius of the circle : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of the circle is : %f",dRet);

    return 0;
}

// Time complexity : O(1) as it is doing one specific task without iterating and  
//                   it performs a fixed number of operations regardless of the input size.