#include <stdio.h>
#include "main.h"

/**
* print_square - a function that prints a square, followed by a new line.
* @size - size of the square
* Return: Always 0.
*/

void print_square(int size)
{
	int i, j;

	i = 0;

	for (i = 1; i <= size; i++)
	{
		if (size <= 0)
		{
			putchar('\n');
		}
		else
		{
			j = 1;

			while (j <= size)
			{
				putchar(35);
				j++;
			}
			putchar('\n');

		}
	}
}
