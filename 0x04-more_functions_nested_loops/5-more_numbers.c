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

	int i, j, f;

	for (j = 1; j <= 10; j++)

	{

		for (i = 0; i <= 14; i++)

		{

			f = i % 10;



			if (i >= 10)

			{

				putchar(48 + i / 10);

			}

			putchar(48 + f);

		}

		putchar('\n');

	}

}


