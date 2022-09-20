#include <stdio.h>

/**
* rev_string -  a function that reverses a string.
* @s : pointer variable
* Return: Always 0.
*/



void rev_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i)
	{
		putchar(s[--i]);
	}
	putchar('\n');
}
