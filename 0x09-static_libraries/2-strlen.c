#include <stdio.h>

/**
* _strlen - a function that returns the length of a string.
* @s: pointer variable
* Return: Always 0.
*/

int _strlen(char *s)

{
	int length;

	length = 0;

	while (s[length])

	{
		length++;
	}

	return (length);
}
