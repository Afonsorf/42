#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int nb;

	printf("\n");

	nb = 59;
	printf("The number is: %i\n", nb);
	printf("Is prime? 1 for yes, 0 for no: %d\n", ft_is_prime(nb));
	printf("\n");

	nb = 17;
	printf("The number is: %i\n", nb);
	printf("Is prime? 1 for yes, 0 for no: %d\n", ft_is_prime(nb));
	printf("\n");

	nb = 4;
	printf("The number is: %i\n", nb);
	printf("Is prime? 1 for yes, 0 for no: %d\n", ft_is_prime(nb));
	printf("\n");

	nb = 0;
	printf("The number is: %i\n", nb);
	printf("Is prime? 1 for yes, 0 for no: %d\n", ft_is_prime(nb));
	printf("\n");

	nb = 1;
	printf("The number is: %i\n", nb);
	printf("Is prime? 1 for yes, 0 for no: %d\n", ft_is_prime(nb));
	printf("\n");

	nb = -1;
	printf("The number is: %i\n", nb);
	printf("Is prime? 1 for yes, 0 for no: %d\n", ft_is_prime(nb));
	printf("\n");

	return (0);
}
