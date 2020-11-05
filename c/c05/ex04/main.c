#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int index;

	printf("\n");

	index = 4;
	printf("The index is: %i\n", index);
	printf("The fibonacci is: %d\n", ft_fibonacci(index));
	printf("\n");

	index =  5;
	printf("The index is: %i\n", index);
	printf("The fibonacci is: %d\n", ft_fibonacci(index));
	printf("\n");

	index = 8;
	printf("The index is: %i\n", index);
	printf("The fibonacci is: %d\n", ft_fibonacci(index));
	printf("\n");

	index = 0;
	printf("The index is: %i\n", index);
	printf("The fibonacci is: %d\n", ft_fibonacci(index));
	printf("\n");

	index = -5;
	printf("The index is: %i\n", index);
	printf("The fibonacci is: %d\n", ft_fibonacci(index));
	printf("\n");

	return (0);
}
