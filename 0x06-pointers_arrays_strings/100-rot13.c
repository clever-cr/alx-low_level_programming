#include "main.h"

/**
*rot13 - encodes a string in rot 13
*@s: string to be encoded
*
*Return: the resulting string
*/
char *rot13(char *s)
{
    int i, j;

    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmopqrstuvwxyz",
    char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm",

    for (i = 0; s[i] != '\0'; j++)
    {
        for (j = 0; a[j] != '\0'; j++)
        {
            if (s[i] == a[j])
            {
                s[i] = b[j];
                break;
            }
        }
    }
    
    return (s);
    
}