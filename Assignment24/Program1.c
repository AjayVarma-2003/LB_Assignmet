// Accept the character from the user and check whether it is alphabet or not
// Input : F    Output : TRUE
// Input : &    Output : FALSE

# include <stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL ChckAlpha(char ch)
{
    int iValue = ch;

    if(iValue >= 65 && iValue <= 90)
    {
        return TRUE;
    }
    else if(iValue >= 97 && iValue <= 122)
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

    bRet = ChckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("This is character...");
    }
    else
    {
        printf("This is not a character...");
    }

    return 0;
}