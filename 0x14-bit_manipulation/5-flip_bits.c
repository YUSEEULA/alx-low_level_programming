#include "main.h"

/**
 * flip_bits -  function that returns the number of bits
 * that you would need to flip to get from one number to another
 *
 * @n: first number
 * @m: second number
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numBits = 0;

	while ((n ^ m) != 0)
	{
		if ((n ^ m) & 1)
			numBits++;

		n >>= 1;
		m >>= 1;
	}

	return (numBits);
}
