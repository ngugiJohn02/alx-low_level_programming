#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
void positive_or_negative(int i)
{
if (i == 0)
{
	printf("%d is zero\n", i);
}
else if (i > 0)

	printf("%d is negative\n", i);
else
	printf("%d is positive\n", i);
}
