#include <stdio.h>

void __attribute__((constructor)) calledFirst();

/**
 * calledFirst - Prints a message before the main function is executed
 */
void calledFirst(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
