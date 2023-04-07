#include "main.h"

/**
 * sqrt_find - first checke for find a root for a find number
 * @g:the root for check through
 * @c:number to find square of C
 * return:the square of C or -1 if C not have a sqrt in IR
 */

int sqrt_find(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_find(g + 1, c));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 * *
 * return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_find(1, n));
}
