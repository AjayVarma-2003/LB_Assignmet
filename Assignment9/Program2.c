// Problem Statement : Write a program which accepts width and height of rectangle from user and calculate its area.

#include <stdio.h>

double RectArea (float width, float height)
{
    auto double dArea = 0.0;

    dArea = width * height;

    return dArea;
}

int main()
{
    auto float fValue1 = 0.0;
    auto float fValue2 = 0.0;
    auto double dRet = 0.0;

    printf("Enter the width : ");
    scanf("%f",&fValue1);

    printf("Enter the height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of the rectangle is : %f",dRet);

    return 0;
}

// Time complexity : O(1) as it is doing one specific task without iterating and  
//                   it performs a fixed number of operations regardless of the input size.