#include <stdio.h>

/*
 * main - prints the size of various types on the computer
 *
 * Return: always 0
 */
int main(void)
{
	char myChar;
	int myInt;
	long int myLongInt;
	long long int myLongLongInt;
	float myFloat;
	{
		printf("size of a char: %lu byte(s)\n", sizeof(myChar));
		printf("size of an int: %lu byte(s)\n", sizeof(myInt));
		printf("size of a long int: %lu byte(s)\n", sizeof(myLongInt));
		printf("size of a long long int: %lu byte(s)\n", sizeof(myLongLongInt));
		printf("size of a float: %lu byte(s)\n", sizeof(myFloat));
	}
	return 0;
}
