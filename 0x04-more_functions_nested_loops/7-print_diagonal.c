#include "main.h"


/**
* print_diagonal - a function that draws a diagonal
* ine on the terminal.
* Return: Always 0.
*
*/

void print_diagonal(int n)

{

	    int i;



	    for (i = 1; i <= n; i++)

	    {

		    if (n <= 0)

		    {

			    _putchar('\n');

		    }

		    else

			    _putchar(92);

		    _putchar('\n');

	    }

}
