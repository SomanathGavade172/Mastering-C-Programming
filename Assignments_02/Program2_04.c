// 4. Accept two numbers from user and display frist number in second number of times.

/*
    Input  : 12    5
    Output : 12    12    12    12   12 

    Input  : -2    3    
    Output : -2   -2    -2

    Input  : -2    0
    Output : 

*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Displays the given number for specified frequency
//  Input           :   Integer, Integer
//  Output          :   Integer
//  Author          :   Gavade Somanath Vilas
//  Date            :   02/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Defination
void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    // Updator
    if(iFrequency < 0)
    {
        iFrequency = -(iFrequency);
    }

    // Business Logic
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Number by Frequency
//  Description         :   This application accepts two integers from the user and displays
//                          frist number in second number of times.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    printf("Enter a Frequency : \n");
    scanf("%d", &iCount);

    Display(iValue, iCount);        // Function Call

    return 0;
}