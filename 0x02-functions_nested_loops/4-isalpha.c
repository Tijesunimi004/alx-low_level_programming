#include <stdio.h>
/**
* isalpha - (int c)
* @c: parameter checked
* Return: 0(success)
*/

int _isalpha(int c)
{
	int i;

	if ((c >= 65 &&  c <= 90) || (c >= 97 && c <= 122))
	{
		i = 1;
	}
	else
	{
		i = 0;

	}

	return (i);


}
