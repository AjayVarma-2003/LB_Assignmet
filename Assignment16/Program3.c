// Accept N numbers from user and return difference between largest number and smallest number 

# include <stdio.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

int Difference (int Arr[], int iLength)
{
    int icnt = 0;
    int max = Arr[0];
    int min = Arr[0];

    if(iLength == 0)
    {
        return -1;
    }

    for(icnt = 1; icnt < iLength; icnt++)
    {
        if(Arr[icnt] > max)
        {
            max = Arr[icnt];
        }
    }

    for(icnt = 0; icnt < iLength; icnt++)
    {
        if(Arr[icnt] < min)
        {
            min = Arr[icnt];
        }
    }

    return max - min;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    p = (int *) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Difference between largest number and smallest number is %d ",iRet);

    free(p);

    return 0;
}
