#include "holberton.h"

/**
 * *_strncat - function that concatenates two strings
 * @src: string to append to dest
 * @dest: resulting string
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
        char *x = dest;

        while (*dest != '\0')
        {
                dest++;
        }

        while (*src && n--)
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return (x);
}
