#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 * Return: always 0
 */
int main(void)
{
	char a = 'a';
	while (a <= 'z');
	{
		putchar (a);
		a++;
	}
putchar('\n');
return (0);
}
