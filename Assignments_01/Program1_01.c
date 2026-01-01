// 1.Program to divide two numbers

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  
//  Function Name   :   Divide
//  Description     :   It is used to Divide Two Numbers.
//  Input           :   Int, Int
//  Output          :   Int
//  Auther          :   Gavade Somanath Vilas
//  Date            :   01/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function defination
int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Division of Two Numbers.
//  Description         :   This application is used to calculate Division of two Numbers using user defined function.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{   
    // Local Variable
    int iValue1 = 15;
    int iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);        // Function Call.

    printf("Division is : %d\n", iRet);

    return 0;
}