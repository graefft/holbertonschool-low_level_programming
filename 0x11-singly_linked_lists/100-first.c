#include "lists.h"

/**
 * before - prints before main function is executed
 */
void before(void) __attribute__ ((constructor));
void before(void)
{
	printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
