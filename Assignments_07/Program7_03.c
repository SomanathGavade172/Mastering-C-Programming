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
//  Function Name   :   EvenFactorial
//  Description     :   Calculates the even factorial of the given number. (Multiplication of all even numbers up to that number)
//  Input           :   Integer
//  Output          :   Integer (Even factorial result)
//  Author          :   Gavade Somanath Vilas
//  Date            :   07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int EvenFactorial(int iNo)
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

    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iFact = iFact * iCnt;        
    }

    return iFact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Even Factorial Calculation
//  Description         :   This application accepts one integer from the user and calculates its even factorial.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);       //  Function Call.

    printf("Even Factorial of Number is : %d\n", iRet);

    return 0;
}