#include "main.h"
/**
* print_alphabet - Print alphabet in lowercase using only `_putchar`
*
* Return: 0
*/
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
