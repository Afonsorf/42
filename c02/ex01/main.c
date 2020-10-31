#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char *str1 = "This is Hello World";
	char *str2;
	int n;

	n = 12;

	printf("this is string 2: %s\n", str2);
	printf("this is n: %i\n", n);

	*str2 = *ft_strncpy(str2, str1, n);
	printf("this is the source: %s\n", str1);
	printf("this is string 2: %s\n", str2);

	//*str2 = *strncpy(str2, str1, n);
	//printf("this is the source: %s\n", str1);
	//printf("this is string 2: %s\n", str2);

}
