#include "lists.h"

/**
 * myStartupFun - prints before main function is executed
 * Return: void
 */

void myStartupFun (void) __attribute__ ((constructor));

void myStartupFun (void)
{
        printf(\
"You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
