#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int nb;

	printf("\n");

	nb = 5;
	printf("The number is: %i\n", nb);
	printf("The factorial is: %d\n", ft_recursive_factorial(nb));
	printf("\n");

	nb = -1;
	printf("The number is: %i\n", nb);
	printf("The factorial is: %d\n", ft_recursive_factorial(nb));
	printf("\n");

	nb = 0;
	printf("The number is: %i\n", nb);
	printf("The factorial is: %d\n", ft_recursive_factorial(nb));
	printf("\n");

	return (0);
}