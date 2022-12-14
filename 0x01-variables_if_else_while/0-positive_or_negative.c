#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Main : main always generates a random
 *
 * Return: Always returns 0 (Success)
 */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* main code block */
				if (n > 0)
				{
					printf("%d is positive\n", n);
				}
				else if (n == 0)
				{
					printf("%d is zero\n", n);
				}
				else if (n < 0)
				{
				        printf("%d is negative\n", n);
				}	

					return (0);
}
