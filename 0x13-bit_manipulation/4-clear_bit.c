#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer to value
 * @index: given index
 * Return: 1 if works, -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int input = *n;

	if (index > 63)
		return (-1);
	*n = input & ~(1 << index);
	return (1);
}
