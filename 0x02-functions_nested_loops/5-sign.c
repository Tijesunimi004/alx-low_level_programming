#include <stdio.h>

/**
* print_sign - (int n)
* @n: parameter checked
* Return: 0(success)
*/


int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		putchar(43);
		i = 1;
	}
	else if (n == 0)
	{
		putchar(48);
		i = 0;
	}
	else
	{
		putchar(45);
		i = -1
	}


	return (i);




}
