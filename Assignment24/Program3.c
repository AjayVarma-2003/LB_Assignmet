// Accept character from user and check whether it is digit or not
// Input : 7    Output : TRUE
// Input : d    Output : FALSE

# include <stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char ch)
{
    int iValue = ch;

    if(iValue >= 48 && iValue <= 57)
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

    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
        printf("This is digit...");
    }
    else
    {
        printf("This is not a digit...");
    }

    return 0;
}