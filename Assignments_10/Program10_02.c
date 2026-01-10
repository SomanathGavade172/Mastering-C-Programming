/* 
    2. Write a program which accept range from user and display all even numbers in between that range.

    Input  : 23 35
    Output : 24 26 28 30 32 34

    Input  : 10 18
    Output : 10 12 14 16 18

    Input  : 10 10
    Output : 10

    Input  : -10 2
    Output : -10 -8 -6 -4 -2 0 2

    Input  : 90 18
    Output : Invalid range

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RangeDisplayEven
//  Description     :   Displays all even numbers between the given start and end range.
//  Input           :   Integer, Integer
//  Output          :   NONE (Prints even integers within the specified range)
//  Author          :   Gavade Somanath Vilas
//  Date            :   10/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    // Invalid range condition
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    // Traverse the range from start to end.
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {   
        // Check whether the number is even.
        if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }        
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Even Numbers in Range.
//  Description         :   This application accepts a starting and ending number from the user and displays all even numbers within that range.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting Point : \n");
    scanf("%d", &iValue1);

    printf("Enter Ending point : \n");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);     //  Function Call

    return 0;
}