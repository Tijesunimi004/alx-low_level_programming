#include <stdio.h>
/**
*  _islower - (int c)
* @c: parameter checked
* Return: Always 0.
*/


int _islower(int c)
{
	int i;

	if (c >= 97 && c <= 122)
	{
		i = 1;
	}

	else
	{
		i = 0;
	}

	return (i);
}
