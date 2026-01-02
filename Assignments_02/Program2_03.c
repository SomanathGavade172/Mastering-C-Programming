//  3. Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”.

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Prints "Hello" if number is less than 10,
//                      otherwise prints "Demo".
//  Input           :   Integer
//  Output          :   Message printed on console
//  Author          :   Gavade Somanath Vilas
//  Date            :   02/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// Function Defination
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Conditional Display Application.
//  Description         :   This application accepts an integer from the user and displays
//                          "Hello" if it is less than 10, otherwise displays "Demo".
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    Display(iValue);        // Function Call

    return 0;
}