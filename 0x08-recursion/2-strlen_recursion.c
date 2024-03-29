#include "main.h"

/**
 * _strlen_recursion - calculate the length of the input
 * @s: input value
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		++length;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
