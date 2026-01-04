/*
    1. Write a program which accept number from user and display its multiplication of factors.

    Input   : 12
    Output  : 144 (1 * 2 * 3 * 4 * 6)

    Input   : 13
    Output  : 1 (1)

    Input   : 10
    Output  : 10 (1 * 2 * 5)

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultFact
//  Description     :   Calculates the multiplication of all factors of the given number.
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Gavade Somanath Vilas
//  Date            :   04/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int MultFact(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;

    //  Filter
    if(iNo == 0)
    {
        return 0;
    }

    //  Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMulti = iMulti * iCnt;
        }
    }

    return iMulti;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Multiplication of Factors
//  Description         :   This application accepts one integer from the user and
//                          displays the multiplication of all its factors.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);        //  Function call

    printf("Multiplication of Factor is : %d\n", iRet);

    return 0;
}