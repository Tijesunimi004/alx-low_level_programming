#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int k = 0;

	while (k <= 10)

	{
		putchar(k + '0');
		putchar(', ');
		k++;

	}

	putchar('\n');
	return 0;


}
