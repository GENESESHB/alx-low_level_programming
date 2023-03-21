#include "main.h"
/**
* print_alphabet_x10 - Print alphabet in lowercase 10 times
*
* Return: 0
*/
void print_alphabet_x10(void)
{
	int n = 0;
	char i;

	while (n < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		n++;
	}
}
