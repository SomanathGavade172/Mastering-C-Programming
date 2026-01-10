/* 
    5.Write a program which accept accept range from user and display all numbers in between that range in reverse order.

    Input  : 23 35
    Output : 35 34 33 32 31 30 29 28 27 26 25 24 23

    Input  : 10 18
    Output : 18 17 16 15 14 13 12 11 10

    Input  : 10 10
    Output : 10

    Input  : -10 2
    Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10

    Input  : 90 18
    Output : Invalid range

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RangeDisplayRev
//  Description     :   Displays all numbers in the given range in reverse order.
//  Input           :   Integer, Integer
//  Output          :   NONE (Prints numbers from end to start of the range)
//  Author          :   Gavade Somanath Vilas
//  Date            :   10/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    // Invalid range condition
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    // Traverse the range in reverse order
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Numbers in Reverse Range.
//  Description         :   This application accepts a starting and ending number and displays all numbers within that range in reverse order.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting Point : \n");
    scanf("%d", &iValue1);

    printf("Enter Ending point : \n");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);     //  Function Call

    return 0;
}