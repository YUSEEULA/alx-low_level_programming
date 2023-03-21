#include "main.h"
#include <stdio.h>
 /**
  * add - function that adds two integers and returns the result
  * x = integer 1
  * y = integer 2
  * sum = result
  * Return : result of sum
  */
int add(int x, int y)
{
	int sum = x + y;
	if (sum < 0)
	{
		putchar('-');
		sum = -sum;
	}
	if (sum > 9)
	{
		add(sum / 10, 0);
	}
	putchar('0' + sum % 10);
	return (sum);
}
