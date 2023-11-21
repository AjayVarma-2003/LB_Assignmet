// Problem Statement : Write a program which accepts number from user and returns the multiplication of the digits

# include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/ 10;
        iCnt = iCnt * iDigit;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}