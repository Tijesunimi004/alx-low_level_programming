#include <stdio.h>


/**
* main - Entry point
* Return: Always 0 (Success)
*/


int main(void)
{

	char alpha = 'a';
	int y = 0;

	while (y < 10)
	{
		putchar(y + '0');
		y++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;

	}

		putchar('\n');
		return (0);







}
