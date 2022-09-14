#include <stdio.h>

/**
* print_alphabet - void
* Return: 0 (success)
*/

int print_alphabet(void)
{

	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);

}
