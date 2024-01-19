// Accept number from user and display below pattern 
// Input : 5
// Output : A B C D E

# include <stdio.h>

void pattern(int no)
{
    int iCnt = 0;

    if(no <= 0)
    {
        printf("Please enter the positive numbers only...");
        return;
    }

    for(iCnt = 0; iCnt < no; iCnt++)
    {
        printf("%c ",'A' + iCnt);
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