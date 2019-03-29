#include "holberton.h"

/**
 * count_bits - counts bits in number
 * @x: number to count
 * Return: count
 */

unsigned long int count_bits(unsigned long int x)
{
	unsigned long int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}

/**
 * flip_bits - returns number of bits you would need to flip in\
 * order to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}
