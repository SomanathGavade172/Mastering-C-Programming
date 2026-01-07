/* 
    3.Write a program to find even factorial of given number.

    Input  : 5
    Output : 8 (4 * 2)

    Input  : -5
    Output : 8 (4 * 2)

    Input  : 10
    Output : 3840 (10 * 8 * 6 * 4 * 2)

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FactorialDiff
//  Description     :   Calculates the difference between the product of even numbers and the product of odd numbers up to the given number.
//  Input           :   Integer
//  Output          :   Integer (Difference between even factorial and odd factorial)
//  Author          :   Gavade Somanath Vilas
//  Date            :   07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    //  Filter
    if(iNo == 0)
    {
        return 1;
    }

    //  Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
                
    }

    return iEvenFact - iOddFact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Factorial Difference Calculation
//  Description         :   This application accepts one integer from the user and calculates the difference between its even factorial and odd factorial.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);       //  Function Call.

    printf("Factorial Difference is : %d\n", iRet);

    return 0;
}