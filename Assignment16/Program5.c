// Accept the N numbers from user and display the summation of digits of each number 

# include <stdio.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

void DigitsSum(int Arr[], int iLength)
{   
    printf("Summation of digits for each number: ");

    for (int icnt = 0; icnt < iLength; icnt++)
    {
        int num = Arr[icnt];
        int sum = 0;

        // Calculate the sum of digits
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }

        printf("%d ", sum);
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

    DigitsSum(p, iSize);

    free(p);

    return 0;
}