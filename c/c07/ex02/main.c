#include <string.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int min;
	int max;
	int *range;
	int	i;

	min = 5;
	max = 50;

	printf("The min is: %i\n", min);
	printf("The max is: %i\n", max);
	printf("The size is: %i\n", ft_ultimate_range(&range, min, max));
	printf("The range is: \n");
	i = 0;
	while (range[i] != '\0')
	{
		printf("%i\n", range[i]);
		i++;
	}

	return (0);
}
