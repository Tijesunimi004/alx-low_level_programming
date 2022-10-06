#include <stdio.h>
#include <stdlib.h>


/*
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argumrnt vector
 * Return: 0 (success)
*/


int main(int argc, char  *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
