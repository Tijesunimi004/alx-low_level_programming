#include <stdio.h>

/**
* print_alphabet_x10 - check the code.
* Write a function that prints 10 times the alphabet,
* in lowercase, followed by a new line.
*
* Return: Always 0.
*/

int print_alphabet_x10(void)
{
	int i;
	char j;

	i = 0;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}

		putchar('\n');
		i++;
	}

	return (0);
}
