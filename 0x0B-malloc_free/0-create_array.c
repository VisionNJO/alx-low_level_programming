#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars 
 *                and initializes it with a specific char.
 * @size: size of an array
 * @c: char
 * Return: NULL if error else return ptr
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);
	unsigned int i;

	if (s == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return ((size == 0) ? NULL : s);
}
 
