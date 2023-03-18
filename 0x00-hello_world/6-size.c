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
	    printf("size of a char: %ld byte(s)\n", sizeof(myChar));
	    printf("size of an int: %ld byte(s)\n", sizeof(myInt));
	    printf("size of a long int: %ld byte(s)\n", sizeof(myLongInt));
	    printf("size of a long long int: %ld byte(s)\n", sizeof(myLongLongInt));
	    printf("size of a float: %ld byte(s)\n", sizeof(myFloat));
    }
    return 0;
}

