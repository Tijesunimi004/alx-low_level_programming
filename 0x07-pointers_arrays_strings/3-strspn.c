#include <stdio.h>



/**
* _strspn - a function that gets the length of a prefix substring.
* @s: string tobe checked
* @accept: contains accepted strings
* Return: the number of bytes in the initial segment of s which consist only
* of bytes from accept
*/



unsigned int _strspn(char *s, char *accept)

{

	unsigned int i, j, c;



	for (i = 0; s[i] != '\0'; i++)

	{

		c = 0;

		for (j = 0; accept[j] != '\0';  j++)

		{

			if (s[i] == accept[j])

			{

				c = 1;

				break;

			}

		}

		if (c == 0)

			break;

	}

	return (i);

}
