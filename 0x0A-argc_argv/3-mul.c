#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication
*of two numbers
*@argc: number of arguments
*@argv: array for the arguments
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc <= 2)
	{
		printf("ERROR\n");
		return (0);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%\n", c);
	return (0);
}
