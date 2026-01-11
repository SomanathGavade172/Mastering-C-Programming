/* 
    5.Write a program which accept number from user and count frequency of such a digits which are less than 6.

    Input  : 2395
    Output : 3

    Input  : 1018
    Output : 3

    Input  : 9440
    Output : 3

    Input  : 96672
    Output : 1

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountLessThanSix
//  Description     :   Counts frequency of digits less than 6 in the given number.
//  Input           :   Integer
//  Output          :   Integer (Count of digits less than 6)
//  Author          :   Gavade Somanath Vilas
//  Date            :   11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int CountLessThanSix(int iNo)
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

        if(iDigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Count Digits Less Than Six.
//  Description         :   This application accepts a number from the user and displays the count of digits which are less than 6.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountLessThanSix(iValue);        //  Function Call.

    printf("%d", iRet);


    return 0;
}