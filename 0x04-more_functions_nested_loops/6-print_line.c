#include "main.h"

/**
 * print_line - print straight line in terminal
 * @n: number of times
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
