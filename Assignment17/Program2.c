// Accept the number from user and display below pattern
// Input : 5
// Output : 5 # 4 # 3 # 2 # 1 #

# include <stdio.h>

void pattern(int no)
{
    int iCnt = 0;

    if(no <= 0)
    {
        printf("Please enter the positive numbers only...");
        return;
    }

    for(iCnt = no; iCnt > 0; iCnt--)
    {
        printf("%d # ", iCnt);
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