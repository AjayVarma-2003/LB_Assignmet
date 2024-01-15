// Accept N numbers from user and return the all such numbers which contains 3 digits in it

# include <stdio.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

void Digits(int Arr[], int iLength)
{   
    printf("Numbers with 3 digits: ");
    
    for (int icnt = 0; icnt < iLength; icnt++)
    {
        if (Arr[icnt] >= 100 && Arr[icnt] <= 999)
        {
            printf("%d ", Arr[icnt]);
        }
    }
    
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    Digits(p, iSize);

    free(p);

    return 0;
}
