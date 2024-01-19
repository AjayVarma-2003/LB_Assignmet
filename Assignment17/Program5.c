// Accept the number from user and display the below pattern
// Input : 8
// Output : 2 4 6 8 10 12 14 16

# include <stdio.h>

void pattern(int no)
{
    int iCnt = 0;

    if(no <= 0)
    {
        printf("Please enter the positive numbers only...");
        return;
    }

    for(iCnt = 1; iCnt <= no; iCnt++)
    {
        printf("%d ", 2 * iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}