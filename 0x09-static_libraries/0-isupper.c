#include "main.h"
/**
 * _isupper - function that varifies if a character is uppercaseor not
 * @c: tested character
 * Return: returns 1 if it is uppercase , 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
