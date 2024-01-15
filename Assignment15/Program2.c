// Accept N numbers from user and accept one number as No, return index of first occurence of that No

# include <stdio.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

int FirstOcc (int Arr[], int iLength, int iNo)
{
    int icnt = 0;

    for(icnt = 0; icnt < iLength; icnt++)
    {
      if(iNo == Arr[icnt + 1])
      {
        return icnt + 1;
      }
      else
      {
        return -1;
      }
    }

}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    int IRet = FALSE;

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

    IRet = FirstOcc(p, iSize, iValue);

    if(IRet == -1)
    {
        printf("There is no such a number ");
    }
    else
    {
        printf("First occurence of the number is %d",IRet);
    }

    free(p);

    return 0;
}