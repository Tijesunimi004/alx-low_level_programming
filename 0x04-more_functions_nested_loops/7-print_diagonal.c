#include "main.h"
#include <stdio.h>


/**
* print_diagonal - a function that draws a diagonal
* ine on the terminal.
* n - lenght of diagonal
* Return: Always 0.
*/

void print_diagonal(int n)

{
	int i;

		for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			putchar('\n');
		}
		else
			putchar(' ');
			putchar(92);
	}

}
