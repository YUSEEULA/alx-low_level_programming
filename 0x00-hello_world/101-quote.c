#include <stdio.h>
/**
 * main - Prints the program
 *
 * Return: Always 1
 */
int main()
{
    write(STDOUT_FILENO, "and that piece of art is useful
		    \" - Dora Korpar, 2015-10-19\n", 59);

    return 0;
}
