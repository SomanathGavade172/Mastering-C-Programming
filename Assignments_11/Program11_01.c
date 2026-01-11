    /* 
        1. Write a program which accept number from user and display its digits in reverse order.

            Input : 2395
            Output : 5
                     9
                     3
                     2

            Input : -1018
            Output : 8
                     1
                     0
                     1
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Displays digits of the given number in reverse order.
//  Input           :   Integer
//  Output          :   NONE (Prints digits in reverse order)
//  Author          :   Gavade Somanath Vilas
//  Date            :   11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
void Display(int iNo)
{
    int iDigit = 0;

    //  Filter
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        printf("%d\n", iDigit);

        iNo = iNo / 10;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Digits in Reverse Order.
//  Description         :   This application accepts a number from the user and displays its digits in reverse order.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    Display(iValue);        //  Function Call

    return 0;
}