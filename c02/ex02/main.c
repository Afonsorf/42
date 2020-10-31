#include <stdio.h>

int	ft_str_is_alpha(char *str);

int		main(void)
{
	char *str1 = "";
	int output;


	printf("this is the input string: %s\n", str1);

	output = ft_str_is_alpha(str1);

	printf("this is the output: %i\n", output);

}
