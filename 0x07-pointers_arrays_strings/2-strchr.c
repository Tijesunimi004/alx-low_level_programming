#include <stdio.h>

/**
* _strchr - a function that locates a character in a string.
* @s: This is the C string to be scanned.
* @c : This is the character to be searched in s
* Return: Always 0.
*/


char *_strchr(char *s, char c)

{

	int i;

	char *p;



	for (i = 0; s[i] >= '\0'; i++)

		if (s[i] == c)

		{

			return (s + i);

		}

	return ('\0');

}
