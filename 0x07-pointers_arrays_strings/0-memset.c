#include <stdio.h>

/**
* _memset - a function that fills
* memory with a constant byte
* @s : This is the pointer of the memory location
* where the memory will be set.
* @b : This is the value that is to be
* copied to the memory block
* @n : This is the number of bytes
* in the memory block which is set.
* Return: Nothing
*/



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for  (i = 0; i < n; i++)
		s[i] = b;

}


