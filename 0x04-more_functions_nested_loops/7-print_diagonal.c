#include <stdio.h>
#include "mainn.h"


/**
* print_diagonal - a function that draws a diagonal
* ine on the terminal.
* Return: Always 0.
*
*/





void print_diagonal(int n)

{

	    int i;



	    for (i = 0; i <= n; i++)

	    {

		    if (n <= 0)

		    {

			    putchar('\n');

		    }

		    else

			    putchar(92);

		    putchar('\n');

	    }

}
