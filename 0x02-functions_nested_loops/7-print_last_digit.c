#include <stdio.h>
#include "main.h"

/**
* print_last_digit - (int)
* @n find the last digit of a number
* Return: Always 0.
*/

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (n < 0)
	{
		a = -(a);
	}
	else
	{
		a;
	}
	_putchar(48 + (a % 10);

	return (a % 10);
}