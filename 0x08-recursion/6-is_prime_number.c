#include "main.h"

/**
*prime1 - makes possible to value from 1 to n
*@num1: same number as n
*@num2: number that iterates from 1 to n
*Return: value
*/
int prime1(int num1, int num2)
{
if (num1 == num2)
{
return (1);
}
if (num1 % num2 == 0)
{
return (0);
}
return (prime1(num1, num2 + 1));
}
/**
*is_prime_number - checks if a number is prime or not
*@n: integer
*Return: value
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (prime1(n, 2));
}
