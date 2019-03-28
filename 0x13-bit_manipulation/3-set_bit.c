#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: value
 * @index: given index
 * Return: 1 if works or -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int input = *n;

	if (index > 63)
		return (-1);
	*n = input | (1 << index);
	return (1);
}
