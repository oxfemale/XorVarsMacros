# XorVarsMacros
MSVC project:<br>
The macro example encrypts string variables before the code build process. With examples of variable extraction, decryption and encryption functions. Macros xor string, but you can remake this example into a more complex encryption option.
<br>
EXEMPLE USE:<br>
<br>

```cpp
/*
Macros make string protected in code
*/
    HideString(ProtectedString, "Nigga I done steal ya bikezz");
```

```cpp
/*
Function get crypted string
*/
    char* CryptedVar = ProtectedString.get();
    printf("crypted: %s\r\n", CryptedVar);
```

```cpp
/*
Function decrypt string
*/
    char* DeCryptedVar = ProtectedString.decrypt();   
    printf("decrypted: %s\r\n", DeCryptedVar);
```


```cpp
/*
Function crypt string
*/

    char* CryptedVarAgain = ProtectedString.crypt();
    printf("crypted again: %s\r\n", CryptedVarAgain);
```cpp
