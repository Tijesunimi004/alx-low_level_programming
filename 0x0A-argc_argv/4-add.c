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



		    char Error;



		    if (argc == 1)

			    printf("0\n");



		    for (i = 1; i < argc; i++)

		    {

			    if ((i >= 'a') && (i <= 'z'))

			    {

				    sum = Error;

				    printf("%c\n", Error);

			    }

			    else

			    {

				    sum += atoi(argv[i]);
			    }
			printf("%d\n", sum);
		    }



		    return 0;

}
