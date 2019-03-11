#include <stdio.h>
#ifndef __FILE__
#define __FILE__
#endif

/**
 * main - prints name of file it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
