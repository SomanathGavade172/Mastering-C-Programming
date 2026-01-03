/*
    3. Write a program which accept number from user and print odd factors of that number.
        
    Input   : 36
    Output  : 1   3  9

*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayFactor
//  Description     :   Displays odd factors of the given number.
//  Input           :   Integer
//  Output          :   Integer(Displays odd factor on console)
//  Author          :   Gavade Somanath Vilas
//  Date            :   03/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Defination
void DisplayFactor(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo <= 0)
    {
        iNo = -(iNo);
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 != 0))
        {
            printf("%d\t", iCnt);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Print odd Factor Numbers
//  Description         :   This application accepts one integer from the user and
//                          prints all odd factors of that number on the screen.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);      // Function Call

    return 0;
}