#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int nb;

	printf("\n");

	nb = 2;
	printf("The number is: %i\n", nb);
	printf("The next prime number is: %d\n", ft_find_next_prime(nb));
	printf("\n");

	nb = 4;
	printf("The number is: %i\n", nb);
	printf("The next prime number is: %d\n", ft_find_next_prime(nb));
	printf("\n");

	nb = 38;
	printf("The number is: %i\n", nb);
	printf("The next prime number is: %d\n", ft_find_next_prime(nb));
	printf("\n");

	nb = 0;
	printf("The number is: %i\n", nb);
	printf("The next prime number is: %d\n", ft_find_next_prime(nb));
	printf("\n");

	nb = -1;
	printf("The number is: %i\n", nb);
	printf("The next prime number is: %d\n", ft_find_next_prime(nb));
	printf("\n");

	return (0);
}
