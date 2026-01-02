// 5. Accept number from user and check wheather number is even or odd.

#include<stdio.h>

// User-defined boolean data type.
typedef int BOOL;

// Macro definition of TRUE & FALSE
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkEven
//  Description     :   Checks whether the given number is even or odd
//  Input           :   Integer
//  Output          :   BOOLEAN(TRUE / FALSE)
//  Author          :   Gavade Somanath Vilas
//  Date            :   02/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Check Even or Odd Number
//  Description         :   This application accepts one integer from the user and
//                          checks whether the number is even or odd.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Even Number\n", iValue);
    }
    else
    {
        printf("%d is Odd Number\n", iValue);
    }

    return 0;
}