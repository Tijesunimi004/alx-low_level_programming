#include <stdio.h>

/**
* puts2 - a function that prints every other character of a string
* starting with the first character, followed by a new line.
* @str : pointer variable
* Return: Always 0.
*/


void puts2(char *str)
{
	int i;

	i = *str;

	i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d", i);
		}
	}
}


