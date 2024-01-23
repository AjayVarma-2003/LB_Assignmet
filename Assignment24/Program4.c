// Accept the character from user and check whether it is small case or not
// Input : g    Output : TRUE
// Input : D    Output : FALSE

# include <stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL CheckSmall(char ch)
{
    int iValue = ch;

    if(iValue >= 97 && iValue <= 122)
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

    bRet = CheckSmall(cValue);

    if(bRet == TRUE)
    {
        printf("This is small character...");
    }
    else
    {
        printf("This is not a small character...");
    }

    return 0;
}