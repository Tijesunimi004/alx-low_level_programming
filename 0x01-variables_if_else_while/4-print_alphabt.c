#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char small = 0;


	for (small = 'a'; small <= 'z'; small++)
	{
		if (small != 'e' && small != 'q')
			putchar(small);
	}

	putchar('\n');
	return (0);

}
