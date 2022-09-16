#include <stdio.h>
#include "main.h"

/**
* print_line - (int n)
* @n : parameter checked
* Return: Always 0.
*/



void print_line(int n)

{

	int x = 0;



	for (x = 0; x <= n; x++)

	{

		putchar('_');

	}

	putchar('\n');

}
