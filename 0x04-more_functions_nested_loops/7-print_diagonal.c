#include "main.h"
#include <stdio.h>


/**
* print_diagonal - a function that draws a diagonal
* ine on the terminal.
* n - length of diagonal
* Return: Always 0.
*/

void print_diagonal(int n)

{
int i, j;



if (n <= 0)

{

	putchar('\n');

}

else

{

	for (i = 0; i < n; i++)

	{

		j = 1;

		while (j <= i)

		{

			putchar(' ');

			j++;

		}

		putchar(92);

		putchar('\n');

	}

}
}
