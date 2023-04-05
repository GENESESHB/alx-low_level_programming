#include "main.h"
/**
 * _print_rev_recursion - function for print reverse string
 * @s:parameter string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
