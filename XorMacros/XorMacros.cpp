// XorMacros.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include "XorString.h"

#pragma warning(disable : 4996)

int main()
{

    HideString(ProtectedString, "Breaking the wall");

    char* CryptedVar = ProtectedString.get();
    printf("crypted: %s\r\n", CryptedVar);

    char* DeCryptedVar = ProtectedString.decrypt();   
    printf("decrypted: %s\r\n", DeCryptedVar);

    char* CryptedVarAgain = ProtectedString.crypt();
    printf("crypted again: %s\r\n", CryptedVarAgain);

    DeCryptedVar = ProtectedString.decrypt();
    printf("decrypted again: %s\r\n", DeCryptedVar);
    return 0;
}
