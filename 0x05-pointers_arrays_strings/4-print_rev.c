#include <stdio.h>

/**
* print_rev - a function that prints a string, in reverse,
* followed by a new line.
* @s : string
* Return: Always 0.
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i)
		putchar(s[--i]);
	putchar('\n');
}
