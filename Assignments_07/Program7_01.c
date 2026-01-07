/* 
    1.Write a program which accept number from user and display below pattern.

    Input  : 5
    Output : * * * * * # # # # #

    Input  : 6
    Output : * * * * * * # # # # # # 

    Input  :-5
    Output : * * * * * # # # # #

    Input  : 2
    Output : * * # #

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Displays a pattern of '*' followed by '#' based on the given number.
//  Input           :   Integer
//  Output          :   None (Displays pattern on console)
//  Author          :   Gavade Somanath Vilas
//  Date            :   07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
void Display(int iNo)
{
    int iCnt = 0;

    //  Filter
    if(iNo == 0)
    {
        return;
    }

    //  Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Pattern Display
//  Description         :   This application accepts one integer from the user and displays
//                          '*' symbols followed by '#' symbols equal to the given number.
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