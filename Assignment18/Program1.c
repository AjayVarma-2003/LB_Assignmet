// Accept the number of rows and number of columns from user and display below pattern
// Input : iRow = 4, iCol = 3
// Output : *   *   *
//          *   *   *
//          *   *   *
//          *   *   *

# include <stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;

    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows and Columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}