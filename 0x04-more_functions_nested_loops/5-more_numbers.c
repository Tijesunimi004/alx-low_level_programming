#include <stdio.h>

#include "main.h"

/**
* more_numbers - (void)
* @void  prints 10 times the numbers, from 0 to 14,
* followed by a new line.
* Return: Always 0.
*/

void more_numbers(void)

{

	int i, j, k;

	j = 0;

	for (j = 0; j < 11; j++)

	{

		putchar('\n');

		i = 0;

		for (i = 0; i < 15; i++)

		{
			j = i % 10;

			if (i > 9)
			{
				putchar(j + '0');	
			}

			
			putchar(i + '0');

		}

	}

}
