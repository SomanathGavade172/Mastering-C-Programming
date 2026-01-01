// 4. Accept one number and check whether is is divisible by 5 or not.

#include<stdio.h>

// User-defined boolean data type
typedef int BOOL;

// Macro definition for TRUE & FALSE
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Description     :   Check whether given number is Divisible by 5 or Not.
//  Input           :   Integer
//  Output          :   BOOLEAN(TRUE / FALSE)
//  Author          :   Gavade Somanath Vilas
//  Date            :   01/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Defination
BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Check Divisibility by 5.
//  Description         :   his application accepts one number from the user and checks whether it is divisible by 5 using 
//                          a user-defined function.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    bRet = Check(iValue);       // Function Call.

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}