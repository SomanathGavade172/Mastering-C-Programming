/* 
    4.Write a program which accept number from user and count frequency of 4 in it.

    Input  : 2395
    Output : 0

    Input  : 1018
    Output : 0

    Input  : 9440
    Output : 2

    Input  : 922432
    Output : 1

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountFour
//  Description     :   Counts frequency of digit 4 in the given number.
//  Input           :   Integer
//  Output          :   Integer (Count of digit 4)
//  Author          :   Gavade Somanath Vilas
//  Date            :   11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int CountFour(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    // Filter
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Count Frequency of Digit Four.
//  Description         :   This application accepts a number from the user and displays the frequency of digit 4 in that number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);        //  Function Call.

    printf("%d", iRet);


    return 0;
}