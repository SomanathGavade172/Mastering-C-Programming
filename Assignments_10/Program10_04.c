/* 
    4.Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only).

    Input  : 23 30
    Output : 108

    Input  : 10 18
    Output : 70

    Input  : -10 2
    Output : Invalid range

    Input  : 90 18
    Output : Invalid range

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RangeSumEven
//  Description     :   Returns the sum of all even numbers in the given positive range.
//  Input           :   Integer, Integer
//  Output          :   Integer (Sum of even numbers in the specified range)
//  Author          :   Gavade Somanath Vilas
//  Date            :   10/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    // Invalid range condition
    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid Range\n");
        return 0;
    }
    
    // Traverse the range and add only even numbers
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {   
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }    
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Addition of Even Numbers in Range.
//  Description         :   This application accepts a starting and ending number and displays the addition of all even numbers within that range.
//                          (Range must contain positive numbers only)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    printf("Enter starting Point : \n");
    scanf("%d", &iValue1);

    printf("Enter Ending point : \n");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);     //  Function Call

    // Display result only if sum is non-zero
    if(iRet != 0)
    {
        printf("Addition of Even numbers is : %d\n", iRet);
    }    

    return 0;
}