#include <string.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int		main(void)
{
	int min;
	int max;
	int i;
	int *result;

	min = 5;
	max = 9;
	result = ft_range(min, max);
	printf("The min is: %i\n", min);
	printf("The max is: %i\n", max);

	i = 0;
	while (result[i] != '\0')
	{
		printf("%i\n", result[i]);
		i++;
	}
	return (0);
}
