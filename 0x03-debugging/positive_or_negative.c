#include "main.h"
/**
 *positve_or_negative - Checks if a number n is positive or negative
 *0 is the number to be checked
 * Return : Always 0 (Success)
 */
void positive_or_negative (int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
		printf("%d is negative\n", i);
}
