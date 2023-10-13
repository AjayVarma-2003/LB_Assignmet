// Problem Statement : Accept on character from user and check whether that character in vowel or not

// Conclusion : Take a charachter from user and check if it is vowel

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if (CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u')
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
    auto char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}