#include <stdio.h>

/**
* _strchr - a function that locates a character in a string.
* @s: This is the C string to be scanned.
* @c : This is the character to be searched in s
* Return: Always 0.
*/


char *_strchr(char *s, char c)

{

	while (*s)

	{

		if (c == *s)

			return (s);

		s++;

	}

	f (c == *s)

		return (s);

	return (NULL);

}
