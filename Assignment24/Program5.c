// Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school A, B, C, D.
// Exam of division A at 7 AM, exam of division B at 8:30 AM, C at 9:20 AM, D at 10:30 AM.
// (Application should be case insensitive)

# include <stdio.h>

void DisplaySchedule(char chDiv)
{
    int iValue = chDiv;

    if(iValue == 65 || iValue == 97)
    {
        printf("Your exam is at 7 AM.");
    }
    else if(iValue == 66 || iValue == 98)
    {
        printf("Your exam is at 8:30 AM.");
    }
    else if(iValue == 67 || iValue == 99)
    {
        printf("Your exam is at 9:20 AM.");
    }
    else if(iValue == 68 || iValue == 100)
    {
        printf("Your exam is at 10:30 AM.");
    }
    else
    {
        printf("Entered division is invalid.");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter your division : ");
    scanf("%c", &cValue);

    printf("\n");

    DisplaySchedule(cValue);

    return 0;
}