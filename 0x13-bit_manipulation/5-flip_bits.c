#include "holberton.h"

/**
 * flip_bits - returns number of bits needed to flip one number to another
 * @n: first number
 * @m: second number
 * Return: void
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
