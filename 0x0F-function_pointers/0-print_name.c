#include "function_pointers.h"

/**
 *print_name - function that prints a name
 *
 * @name: this is the input string or the input name
 * @f: this is the input function to print the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
