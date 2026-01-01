// 2. Program to print 5 times “Marvellous” on screen.

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   Display
//  Description     :   It is used to print the string "Marvellous" five times on screen.
//  Input           :   None
//  Output          :   Print "Marvellous" 5 times on Screen.
//  Author          :   Gavade Somanath Vilas
//  Date            :   01/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

// Function defination
void Display()
{
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
        printf("Marvellous\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Print String Multiple Times.
//  Description         :   This application print the word "Marvellous" five times using loop.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    Display();      // Function Call.

    return 0;
}