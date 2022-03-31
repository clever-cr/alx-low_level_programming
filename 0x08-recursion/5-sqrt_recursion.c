#include "main.h"

/**
*sqrt1 - makes possible to value from 1 to n
*@num1: same as n
*@num2: number that iterates from 1 to n
*Return: value
*/
int sqrt1(int num1, int num2)
{
if (num2 * num2 == num1)
{
return (num2);
}
if (num2 * num2 > num1)
{
return (-1);
}
return (sqrt1(num1, num2 + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
*@n: integer
*Return: value
*/
int _sqrt_recursion(int n)
{
return (sqrt1(n, 1));
}
