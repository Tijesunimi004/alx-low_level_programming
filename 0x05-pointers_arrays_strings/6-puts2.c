#include <stdio.h>

/**
* puts2 - a function that prints every other character of a string
* starting with the first character, followed by a new line.
* @str : pointer variable
* Return: Always 0.
*/


void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
	if (i % 2 == 0)
	{
		write(1, &str[i], 1);
	}
	i++;
}
putchar('\n');
}


