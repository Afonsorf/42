#include "ft_abs.h"
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 5;
	j = -10;

	printf("The positive number is: %i \n", i);
	printf("The absolute value is: %i \n", ABS(i));
	printf("The negative number is: %i \n", j);
	printf("The absolute value is: %i \n", ABS(j));
	return (0);
}
