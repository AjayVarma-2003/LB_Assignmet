// Problem Statement : Accept one character from user and convert case of that character

// Conclusion : If letter taken in smaller case then it should print it in upper case and viceversa

#include <stdio.h>
#include <ctype.h>
// int tolower(int C);
// int toupper(int c);

void DisplayConvert(char CValue)
{
    if (islower(CValue))
    {
        printf("%c",toupper(CValue));
    }
    else if (isupper(CValue))
    {
        printf("%c",tolower(CValue));
    }
    else
    {
        printf("Invalid input please type only alphabets.");
    }
}

int main()
{
    auto char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);
    
    DisplayConvert(cValue);

    return 0;
}