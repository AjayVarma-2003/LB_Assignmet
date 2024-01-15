// Accept N numbers from user and accept one number as No, check whether No is present or not

# include <stdio.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int icnt = 0;

    for(icnt = 0; icnt < iLength; icnt++)
    {
        if(Arr[icnt + 1] == iNo)
        {
            return TRUE;
        }
        else 
        {
            return FALSE;
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the number : ");
    scanf("%d",&iValue);

    p = (int *) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory.");
        return -1;
    }

    printf("Enter the %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element %d: ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Given number is present ...");
    }
    else
    {
        printf("Given number is not present ...");
    }

    free(p);

    return 0;
}