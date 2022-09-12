#include <stdio.h>

/**
* main -prints all single digit numbers of base 10 starting from 0
* separated by ,
* Numbers should be printed in ascending order
* Return: 0 (success)
*/

int main(void)

{
	int k = 0;

	while (k < 10)
	{
		putchar(k +  '0');
			if  (k != 9)
			{
				putchar(44);
				putchar(32);
			}
		k++;


	}

	putchar('\n');
	return (0);






}
