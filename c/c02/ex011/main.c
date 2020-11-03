#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char str1[] = "Coucou\ntu vas bien ?";

	printf("s1 before converting : %s\n", str1);

	ft_putstr_non_printable(str1);
	
	return 0;
}