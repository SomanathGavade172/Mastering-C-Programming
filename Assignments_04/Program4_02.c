/* 
    2. Write a program which accept number from user and display it factor in decreasing order.
    
    Input    : 12
    Output   : 6 4 3 2 1

    Input    : 13
    Output   : 1

    Input    : 10
    Output   : 5 2 1

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FactRev
//  Description     :   Displays all factors of the given number in decreasing order.
//  Input           :   Integer
//  Output          :   Integer(Displays factors in reverse order)
//  Author          :   Gavade Somanath Vilas
//  Date            :   04/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
void FactRev(int iNo)
{
    int iCnt = 0;

    //  Filter
    if(iNo == 0)
    {
        return;
    }

    //  Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        printf("%d\t", iCnt);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Factors in Decreasing Order
//  Description         :   This application accepts one integer from the user and
//                          displays all its factors in decreasing order.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    FactRev(iValue);        //  Function Call

    return 0;
}