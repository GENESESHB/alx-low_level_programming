#include "main.h"
/**
 * _strlen_recursion - give a length for string
 * @s: string muesure
 * Return: length  of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
