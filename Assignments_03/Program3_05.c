/*
    5. Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
    
    Input : E       Output : TRUE

    Input : d       Output : FALSE

*/

#include<stdio.h>

// User-deffined boolean data type.
typedef int BOOL;

// Macro definition of TRUE & FALSE
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkVowel
//  Description     :   Checks whether the given character is a vowel or not.
//  Input           :   Character
//  Output          :   BOOLEAN (TRUE / FALSE)
//  Author          :   Gavade Somanath Vilas
//  Date            :   03/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
BOOL ChkVowel(char cLetter)
{
    if(cLetter == 'a' || cLetter == 'e' || cLetter == 'i' || cLetter == 'o' || cLetter == 'u' || cLetter == 'A' || cLetter == 'E' || cLetter == 'I' || cLetter == 'O' || cLetter == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Check Vowel Character
//  Description         :   This application accepts one character from the user
//                          and checks whether it is a vowel or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character : \n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);        //  Function Call

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}