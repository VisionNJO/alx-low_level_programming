#include "main.h"

/**
 * factorial - Entry
 * Description: Write a function that returns the factorial of a given number
 */
int fact(int n)
{
	if (n == 1)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
