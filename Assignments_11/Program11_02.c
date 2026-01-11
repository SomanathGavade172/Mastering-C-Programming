/* 
    2.Write a program which accept number from user and check whether it contains 0 in it or not.

    Input  : 2395
    Output : There is no Zero

    Input  : 1018
    Output : It Contains Zero

    Input  : 9000
    Output : It Contains Zero

    Input  : 10687
    Output : It Contains Zero

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkZero
//  Description     :   Checks whether the given number contains zero or not.
//  Input           :   Integer
//  Output          :   BOOLEAN (TRUE if zero is present, otherwise FALSE)
//  Author          :   Gavade Somanath Vilas
//  Date            :   11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
BOOL ChkZero(int iNo)
{   
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }
        
        iNo = iNo / 10;

    }

    return FALSE;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Check Zero in Number.
//  Description         :   This application accepts a number from the user and checks whether it contains zero or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);     //  Function Call.

    if(bRet == TRUE)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}