#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - function that returns the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: return a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that returns the difference of two integers
 * @a: first integer
 * @b: second integer
 * Return: return a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that returns the product of  two integers
 * @a: first integer
 * @b: second integer
 * Return: return a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div- function that returns the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: return a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod- funtion that returns the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: return a/b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
