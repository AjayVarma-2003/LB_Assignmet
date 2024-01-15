// Accept N numbers from user and return product of the all odd numbers

# include <stdio.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

int Product(int Arr[], int iLength)
{   
    int icnt = 0;
    int product = 1;

    for(icnt = 0; icnt < iLength; icnt++)
    {
        if(Arr[icnt] % 2 != 0)
        {
            product *= Arr[icnt];
        }
    }

    return product;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

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

    iRet = Product(p, iSize);

    printf("Product of all odd elements are : %d",iRet);

    free(p);

    return 0;
}