/* 
    5. Write a program which accept number from user and return difference between summation of all its factor and non factors.
    
    Input   : 12
    Output  : -34 (16 - 50)

    Input   : 10
    Output  : -29 (8 - 37)

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumNonFact
//  Description     :   Calculates and returns the difference between summation of all factors and summation of all non-factors of the given number.
//  Input           :   Integer
//  Output          :   Integer(Returns difference: SumFactors - SumNonFactors)
//  Author          :   Gavade Somanath Vilas
//  Date            :   04/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

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

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    return iSumFact - iSumNonFact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Difference Between Factors and Non-Factors
//  Description         :   This application accepts one integer from the user and displays the difference between the summation of its
//                          factors and non-factors.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);        //  Function Call

    printf("Sumation of Non-Factor is : %d\n", iRet);

    return 0;
}