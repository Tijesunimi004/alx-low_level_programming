#include <stdio.h>
#include <stdlib.h>

/*
* main -  a program that adds positive numbers.
* @argc: argument count
* @argv: argumrnt vector
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
		int i = 0;

	        int sum = 0;

		for(i = 1; i < argc; i++)
		{
			if (i >= 'a' && i <= 'z')
			{
				printf("Error\n");
			}

			else if (argc == 1)
			{
				printf("0\n");
			}

			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);

		return (0);

}
