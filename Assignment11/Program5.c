// Problem Statement : Write a program which accepts number from user and count frequency of the digits which are less than 6

# include <stdio.h>

int Count (int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit < 6)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}