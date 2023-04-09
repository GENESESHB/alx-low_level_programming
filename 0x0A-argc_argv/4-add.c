#include <stdio.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: numbre of arguments
*@argv: array of arguments
*Return: 0 on success , 1 on failure
*/

int main(int argc, char *argv[])
{
	int h, f, sum = 0;

	for (h = 1; h < argc; h++)
	{
		for (f = 0; argv[h][f] != '\0'; f++)
		{
			if (argv[h][f] < '0' || argv[h][f] > '9')
			{
				printf("error\n");
				return (1);
			}
		}

		sum += atoi(argv[h]);
	}

	printf("%d\n", sum);

	return (0);
}
