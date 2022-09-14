#include <stdio.h>

/**
 *
 * * main -prints all single digit numbers of base 10 starting from 0
 *
 * * separated by ,
 *
 * * Numbers should be printed in ascending order
 *
 * * Return: 0 (success)
 *
 * */

int main(void)

{



	    int i;

	        int j;

		    int k;





		        for(i = 0; i < 10; i++)
	    {

	            {

           for(j = 1; j < 10; j++)

										        {
									            for(k = 1; k < 10; k++)
								                {


										if ((i < j && j < k) && ((i != j && j != k)))

																				                {
							                    putchar(i + '0');

																                        putchar(j + '0');

																										                    putchar(k + '0');

																										                    if (i + j + k != 24)

																													                    {

																                        putchar(44);
																										                    putchar(" ");
																																									                    }
																			                    }
																		            }

		    									}

									        }

     }

	putchar("\n");

	return (0);
}
