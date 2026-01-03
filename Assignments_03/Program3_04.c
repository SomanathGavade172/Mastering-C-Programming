/*
    4. Accept one character from user and convert case of that character.
    
    Input : a       Output : A

    Input : D       Output : d

*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayConvert
//  Description     :   Converts the case of the given character.
//  Input           :   Character
//  Output          :   Character (Converted case)
//  Author          :   Gavade Somanath Vilas
//  Date            :   03/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Defination 
void DisplayConvert(char cLetter)
{
    if(cLetter >= 65 && cLetter <= 90)
    {
        printf("%c", cLetter + 32);
    }
    else if(cLetter >= 97 && cLetter <= 122)
    {
        printf("%c", cLetter - 32);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Convert Character Case
//  Description         :   This application accepts one character from the user
//                          and converts its case.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = 0;

    printf("Enter a Character : \n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);     // Function Call

    return 0;
}