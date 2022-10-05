#include <stdio.h>

/**
* _memcpy - check the code
* @dest : An array where src will be copied to.
* @src : The string to be copied.
* @n : The number of characters to copy.
* Return: Always 0.
*/



char *_memcpy(char *dest, char *src, unsigned int n)

{

	unsigned int i;

	for (i = 0; i < n; i++)

		dest[i] = src[i];

	return (dest);

}
