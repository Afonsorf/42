
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *str1 = "Hello World";
	char *str2;

	printf("this is string 2: %s\n", str2);

	*str2 = *ft_strcpy(str2, str1);
	
	//*str2 = *strcpy(str2, str1);

	printf("this is the source: %s\n", str1);
	printf("this is string 2: %s\n", str2);


}
