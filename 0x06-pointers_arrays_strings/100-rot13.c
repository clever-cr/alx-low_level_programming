#include "main.h"

/**
*rot13 - encodes a string in rot 13
*@s: string to be encoded
*Return: the resulting string
*/
char *rot13(char *s)
{
    int i, j;

    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmopqrstuvwxyz",
    char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm",

for (i = 0; *(s + i); i++)
{
    for (j = 0; j < 52; j++)
    {
        if (a[j] == *(s + i))
        {
            *(s + i) = b[j];
            break;
        }
    }
}
    
    return (s);

}