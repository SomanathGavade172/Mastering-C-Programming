// 3. Program to print 5 to 1 numbers on screen.

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   It is used to Print numbers from 5 to 1.
//  Input           :   None
//  Output          :   Prits number from 5 to 1.
//  Author          :   Gavade Somanath Vilas
//  Date            :   01/01/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function defination
void Display()
{
    int i = 0;
        i = 5;

    while(i >= 1)
    {
        printf("%d\n", i);

        i--;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Print Numbers from 5 to 1
//  Description         :   This application displays numbers in reverse order using a while loop.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    Display();      // Function Call.

    return 0;
}