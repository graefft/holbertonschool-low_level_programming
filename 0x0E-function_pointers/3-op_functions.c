#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - returns sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a and b
 * @a: first integer
 * @b: second integer
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first integer
 * @b: second integer
 * Return: product of division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of division a by b
 * @a: first integer
 * @b: second integer
 * Return: remainder of division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
