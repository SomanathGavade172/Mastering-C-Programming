/* 
    4. Write a program to find odd factorial of given number.

    Input  : 5
    Output : 15 (5 * 3 * 1)

    Input  : -5
    Output : 15 (5 * 3 * 1)

    Input  : 10
    Output : 945 (9 * 7 * 5 * 3 * 1)

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   OddFactorial
//  Description     :   Calculates the Odd factorial of the given number. (Multiplication of all Odd numbers up to that number)
//  Input           :   Integer
//  Output          :   Integer (Odd factorial result)
//  Author          :   Gavade Somanath Vilas
//  Date            :   07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

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

    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iFact = iFact * iCnt;        
    }

    return iFact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Odd Factorial Calculation
//  Description         :   This application accepts one integer from the user and calculates its Odd factorial.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);       //  Function Call.

    printf("Odd Factorial of Number is : %d\n", iRet);

    return 0;
}