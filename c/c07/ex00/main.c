#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char *src;

	src = "abcde";
	printf("The command output is: %s\n", strdup(src));
	printf("the function output is: %s\n", ft_strdup(src));
}
