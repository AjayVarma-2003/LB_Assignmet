// Accept the character from user and check whether it is capital or not
// Input : F    Output : TRUE
// Input : d    Output : FALSE

# include <stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
    int iValue = ch;

    if(iValue >= 65 && iValue <= 90)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("This is capital letter");
    }
    else
    {
        printf("This is not a capital letter...");
    }

    return 0;
}