/* 
    4. Write a program which accept number from user and return summation of all its non factors.

    Input   : 12
    Output  : 50

    Input   : 10
    Output  : 37

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumNonFact
//  Description     :   Calculates and returns the summation of all non-factors of the given number.
//  Input           :   Integer
//  Output          :   Integer(Returns summation of non-factors)
//  Author          :   Gavade Somanath Vilas
//  Date            :   04/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

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

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Summation of Non-Factors
//  Description         :   This application accepts one integer from the user and
//                          displays the summation of all non-factors of that number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);        //  Function Call

    printf("Sumation of Non-Factor is : %d\n", iRet);

    return 0;
}