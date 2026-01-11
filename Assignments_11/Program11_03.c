/* 
    3.Write a program which accept number from user and count frequency of 2 in it.

    Input  : 2395
    Output : 1

    Input  : 1018
    Output : 0

    Input  : 9000
    Output : 0
     
    Input  : 922432
    Output : 3

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountTwo
//  Description     :   Counts frequency of digit 2 in the given number.
//  Input           :   Integer
//  Output          :   Integer (Count of digit 2)
//  Author          :   Gavade Somanath Vilas
//  Date            :   11/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int CountTwo(int iNo)
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

        if(iDigit == 2)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Count Frequency of Digit Two.
//  Description         :   This application accepts a number from the user and displays the frequency of digit 2 in that number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);        //  Function Call.

    printf("%d", iRet);


    return 0;
}