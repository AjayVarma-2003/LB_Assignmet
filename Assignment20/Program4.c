// Accept the number of rows and columns from the user and display below pattern
// Input :  iRow = 5, iCol = 5
// Output : 1   2   3   4   5
//          -1  -2  -3  -4  -5
//          1   2   3   4   5
//          -1  -2  -3  -4  -5
//          1   2   3   4   5

# include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d \t", 1 + j);
            }
            else
            {
                printf("%d \t", -(1 + j));
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}