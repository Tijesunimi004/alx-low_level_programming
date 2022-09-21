#include <stdio.h>



/**
 * print_array - a function that prints n elements
 * of an array of integers, followed by a new line.
 * @a : pointer variable
 * @n : integer
 * Return: Always 0.
 */





void print_array(int *a, int n)

{

	int i;

	i = 0;

	for (i = 0; i < n; i++)

	{

		printf("%d ,", a[i]);

	}

	putchar('\n');

}
