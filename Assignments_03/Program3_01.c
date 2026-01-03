/*
    1.Write a program which accept one number from user and print that number of even numbers on screen.
    
    Input   : 7
    Output  : 2 4 6 8 10 12 14

*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   PrintEven
//  Description     :   Prints the specified number of even numbers on screen.
//  Input           :   Integer
//  Output          :   Integer(Displays even numbers on console)
//  Author          :   Gavade Somanath Vilas
//  Date            :   03/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Defination
void PrintEven(int iNo)
{
    int iCnt = 0;

    // Filter
    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Print Even Numbers
//  Description         :   This application accepts one integer from the user and
//                          prints that number of even numbers on the screen.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    PrintEven(iValue);      // Function Call

    return 0;
}