#include "main.h"
#include <string.h>

/**
 * factorial - check the code for Holberton School students.
 * @n : parameter
 * Return: length of s
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
