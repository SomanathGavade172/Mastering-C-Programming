//  2. Accept one number from user and print that number of * on screen.

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Prints the given number of '*' symbols on screen.
//  Input           :   Integer
//  Output          :   Prints '*' symbols on console.
//  Author          :   Gavade Somanath Vilas
//  Date            :   02/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Defination
void Display(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo > iCnt)
    {
        printf("*\t");

        iNo--;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Print Star Pattern
//  Description         :   This application accepts a number from the user and prints
//                          that many '*' symbols using a While loop.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    Display(iValue);        // Function Defination

    return 0;
}