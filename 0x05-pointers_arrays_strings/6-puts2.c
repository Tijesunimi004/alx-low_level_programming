#include <stdio.h>

/**
* puts2 - a function that prints every other character of a string
* starting with the first character, followed by a new line.
* @str : pointer variable
* Return: Always 0.
*/


void puts2(char *str)
{
int i = 0, j = 0;

while (str[i] != '\0')
{
	i++;
}

i -= 1;

for (j = 0; j <= i; j += 2)

{
	putchar(str[i]);
}

putchar('\n');
}


