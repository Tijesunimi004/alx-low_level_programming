#include <stdio.h>
#include <stdlib.h>


/*
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argumrnt vector
 * Return: 0 (success)
*/


int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
