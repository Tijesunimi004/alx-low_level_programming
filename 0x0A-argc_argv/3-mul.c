#include <stdio.h>
#include <stdlib.h>


/*
 * main - Write a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argumrnt vector
 * Return: 0 (success)
 */


int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");

	return (0);
}
