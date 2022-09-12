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
			if (k != 9)
			{
				putchar(44);
				putchar(32);
			}
		k++;

	}

	putchar('\n');
	return (0);


}
