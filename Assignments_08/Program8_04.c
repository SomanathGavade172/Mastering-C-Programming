/* 
    4. Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))

    Input  : 10
    Output : -12.2222 (10 - 32) * (5/9)

    Input  : 34
    Output : 1.11111 (34 - 32) * (5/9)

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FhtoCs
//  Description     :   Converts temperature from Fahrenheit to Celsius.
//  Input           :   Float (Temperature in Fahrenheit)
//  Output          :   Double (Equivalent temperature in Celsius)
//  Author          :   Gavade Somanath Vilas
//  Date            :   08/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
double FhtoCs(float fTemp)
{
    double dConvert = 0.0;

    dConvert = (fTemp - 32) * (5.0f / 9.0f);

    return dConvert;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Fahrenheit to Celsius Conversion
//  Description         :   This application accepts temperature in Fahrenheit from the user and converts it into Celsius.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenherit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);      //  Function call.

    printf("%f Fahrenheit is = %f Celsius", fValue, dRet);
    
    return 0;
}

