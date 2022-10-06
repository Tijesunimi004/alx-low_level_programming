#include <stdio.h>
#include <stdlib.h>


/*
* main - a program that prints its name, followed by a new line.
* @argc: argument count
* @argv: argumrnt vector
* Return: 0 (success)
*/


int main(int argc, char* argv[])
{
	printf("%s", argv[argc - 1]);

	return (0);
}
