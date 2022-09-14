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
		i = 1;
		putchar(43);

	}
	else if (n == 0)
	{
		i = 0;
		putchar(48);

	}
	else
	{
		i = -1;
		putchar(45);


	}


	return (i);




}
