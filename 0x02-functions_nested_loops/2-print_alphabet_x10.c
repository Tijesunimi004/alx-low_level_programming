#include <stdio.h>

/**
* main - check the code.
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
