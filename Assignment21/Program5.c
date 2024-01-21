// Accept the number of rows and columns from user and display the below pattern
// Input :  iRow = 4, iCol = 4
// Output : 1   2   3   4
//          1   *   *   4
//          1   *   *   4
//          1   2   3   4

# include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == iRow || i == 1)
            {
                printf("%d \t", 1 + j);
            }
            else if(j == 0)
            {
                printf("%d \t", j + 1);
            }
            else if (j == iCol + 1)
            {
                printf("%d \t", j + 1);
            }
            else
            {
                printf("* \t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}