#include "main.h"

/**
* create_array - creates an array of char, and
* initializes it with a specific char.
*@size: size of the array
*@c: Character to insert
*Return:NULL if size is zero or if it fails,
*pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
	char *arry;
	unsigned int index;

	if (size == 0)
		return (NULL);
	arry = malloc(sizeof(char) * size);

	if (arry == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arry[index] = c;

	return (arry);
}
