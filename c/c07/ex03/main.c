#include <string.h>
#include <stdio.h>

char		*ft_strjoin(int size, char **strs, char *sep);

int		main(int argc, char *argv[])
{
	printf("The full string is: %s\n", ft_strjoin(argc, argv, "l"));
	return (0);
}
