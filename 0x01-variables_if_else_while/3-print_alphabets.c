#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char small = 'a';

	while (small <= 'z')
	{
		putchar(small);
		small++;

	}

	char big = 'A'

	while (big <= 'Z')
	{
		putchar(big);
		big++;
	}

	putchar('\n')

	return (0);

}
