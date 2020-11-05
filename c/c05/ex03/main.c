#include <stdio.h>

int	ft_recursive_power(int nb, int power);
int	main(void)
{
	int nb;
	int power;

	printf("\n");

	nb = 5;
	power = 2;
	printf("The number is: %i\n", nb);
	printf("The power is: %i\n", power);
	printf("The result is: %d\n", ft_recursive_power(nb, power));
	printf("\n");

	nb = -1;
	power = 3;
	printf("The number is: %i\n", nb);
	printf("The power is: %i\n", power);
	printf("The result is: %d\n", ft_recursive_power(nb, power));
	printf("\n");

	nb = 0;
	power = 2;
	printf("The number is: %i\n", nb);
	printf("The power is: %i\n", power);
	printf("The result is: %d\n", ft_recursive_power(nb, power));
	printf("\n");

	nb = 1;
	power = -2;
	printf("The number is: %i\n", nb);
	printf("The power is: %i\n", power);
	printf("The result is: %d\n", ft_recursive_power(nb, power));
	printf("\n");

	nb = 0;
	power = 0;
	printf("The number is: %i\n", nb);
	printf("The power is: %i\n", power);
	printf("The result is: %d\n", ft_recursive_power(nb, power));

	return (0);
}
