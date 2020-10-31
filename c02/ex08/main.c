#include <stdio.h>
#include <stdlib.h>
char	*ft_strlowcase(char *str);
int		main(void)
{

	char str1[] = "This iS ranDoM ";
	//	char *str2;
	//= *ft_strupcase(str1);
	//print
	printf("s1 before converting : %s\n", str1);

	//convert to uppercase
	//	*str2 = *ft_strupcase(str1);
	//print uppercase
	printf("s1 after converting : %s\n", ft_strlowcase(str1));

	return 0;
}
