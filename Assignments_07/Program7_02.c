/* 
    2. Accept amount in US dollar and return its corresponding value in Indian currency.

        //  Consider 1$ as 70 rupees.

    Input  : 10
    Output : 700

    Input  : 3
    Output : 210

    Input  : 1200
    Output : 84000

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DollerToINR
//  Description     :   Converts the given amount in US Dollars to Indian Rupees.
//  Input           :   Integer
//  Output          :   Integer (Equivalent amount in INR)
//  Author          :   Gavade Somanath Vilas
//  Date            :   07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int DollerToINR(int iNo)
{
    int iConvert = 0;

    //  Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    iConvert = iNo * 70;

    return iConvert;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Dollar to INR Conversion
//  Description         :   This application accepts an amount in US Dollars from the user
//                          and converts it into Indian Rupees considering 1 USD = 70 INR.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number of USD : \n");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);     //  Function call.

    printf("Value in INR is : %d\n", iRet);

    return 0;
}