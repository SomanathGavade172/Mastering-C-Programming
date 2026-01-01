//  5. Accept one number from user and print that number of * on screen.

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Accept
//  Description     :   Prints the given number of '*' symbols on screen.
//  Input           :   Integer
//  Output          :   Prints '*' symbols
//  Author          :   Gavade Somanath Vilas
//  Date            :   01/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Defination
void Accept(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
        printf("*\t");
   }
    
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Print Star Pattern
//  Description         :   This application accepts a number from the user and prints
//                          that many '*' symbols using a for loop.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    Accept(iValue);     // Function Call.
    return 0;
}