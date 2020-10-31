#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int		main(void)
{
	char *str1 = "AADGgFGAFG";
	int output;


	printf("this is the input string: %s\n", str1);

	output = ft_str_is_uppercase(str1);

	printf("this is the output: %i\n", output);

}
