#include <stdio.h>

/**
* main - prints all programme recieved
*@argc: arguments count
*@argv: arguments vecteur
*Return: returns 0
*/

int main(int argc, char * argv[])
{
                 int i;
		 
		 for (i = 0; i < argc; i++)
			 printf("%s\n", argv[i]);
				 
	         return (0);
}
