#include <stdio.h>

void b_main(void)__attribute__((constructor));

/**
 * b_main - function that print a message before the main function
 *
 */

void b_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
