#include <stdio.h>


/**
* main - Entry point
* Return: Always 0 (Success)
*/


int main(void)
{

	char alpha = 'a';
	int y = 0;

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	while (y < 10)
	{
		putchar(y + '0');
		y++;
	}

		putchar('\n');
		return (0);







}
