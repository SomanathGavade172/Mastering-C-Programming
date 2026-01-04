/* 
    3. Write a program which accept number from user and display all its non factor.

    Input   : 12
    Output  : 5 7 8 9 10 11

    Input   : 13
    Output  : 2 3 4 5 6 7 8 9 10 11 12

    Input   : 10
    Output  : 3 4 6 7 8 9

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   NonFact
//  Description     :   Displays all non-factors of the given number.
//  Input           :   Integer
//  Output          :   Integer(Displays non-factors on console)
//  Author          :   Gavade Somanath Vilas
//  Date            :   04/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
void NonFact(int iNo)
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
        if(iNo % iCnt != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Non-Factors
//  Description         :   This application accepts one integer from the user and
//                          displays all non-factors of that number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    NonFact(iValue);        //  Function Call

    return 0;
}