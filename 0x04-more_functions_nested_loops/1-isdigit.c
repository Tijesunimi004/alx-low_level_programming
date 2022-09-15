#include <stdio.h>

/**
* _isdigit - (int c)
* @c: parameter checked
* Return: Always 0.
*/

int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}

int main(void)

{

char c;

c = '0';

printf("%c: %d\n", c, _isdigit(c));

c = 'a';

printf("%c: %d\n", c, _isdigit(c));

return (0);

}
