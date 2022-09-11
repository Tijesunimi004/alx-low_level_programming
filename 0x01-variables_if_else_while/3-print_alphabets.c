#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char small = 0;
	char big = 0;

	for (small = 'a'; small <= 'z'; small++)
	{
		putchar(small);
	}

	for (big = 'A'; big <= 'Z'; big++)
	{
		putchar(big);
	}

	putchar('\n');

	return (0);


}
