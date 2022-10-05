#include <stdio.h>

/**
* _strncat- a function that concatenates two strings
* @dest: first string
* @src: second string
* @n: number of character from src to be added to dest
* Return: Always 0.
*/


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = dest[i];
	}

	j = i;

	i = 0;

	while (i < n)
	{
		dest[j] = src[i];

		if (src[i] == '\0')
			break;
		j++;
		i++;
	}
	return (dest);
}
