// Program to print 5 to 1 number on screen

#include <stdio.h>

void Display()
{
    int i = 0;
    int n = 5;              // Sir here we have to define another variable but there is same variable given in assignment
    for(i = 1; i <= n;)
    {
        printf("%d \n",i);
        i++;
    }
}

int main()
{
    Display();

    return 0;
}