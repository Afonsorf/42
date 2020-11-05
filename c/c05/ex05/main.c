#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int nb;

	printf("\n");

	nb = 25;
	printf("The number is: %i\n", nb);
	printf("The result is: %d\n", ft_sqrt(nb));
	printf("\n");

	nb = 4;
	printf("The number is: %i\n", nb);
	printf("The result is: %d\n", ft_sqrt(nb));
	printf("\n");

	nb = 81;
	printf("The number is: %i\n", nb);
	printf("The result is: %d\n", ft_sqrt(nb));
	printf("\n");

	nb = 0;
	printf("The number is: %i\n", nb);
	printf("The result is: %d\n", ft_sqrt(nb));
	printf("\n");

	nb = -1;
	printf("The number is: %i\n", nb);
	printf("The result is: %d\n", ft_sqrt(nb));
	printf("\n");

	return (0);
}
