#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: const unsigned int
 * Return: 0 if n == 0 else sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, j;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		sum = sum + j;
	}
	return (sum);
}
