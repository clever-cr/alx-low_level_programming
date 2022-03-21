#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to be checked
 * Return: 1 if it is upper, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
