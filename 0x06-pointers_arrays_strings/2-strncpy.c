#include <stdio.h>

/**
 * _strncpy- a function that copies a string.
 * @dest: first string
 * @src: second string
 * @n: number of character from src to be added to dest
 * Return: Always 0.
 */


char *_strncpy(char *dest,  char *src, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

