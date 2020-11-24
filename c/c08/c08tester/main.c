#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define INT_MIN -2147483648
#define INT_MAX 2147483647
#define ASCII_OFFSET 48

/* Other */
typedef struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
}				t_stock_str;

/* Prototypes of 42 functions */
t_stock_str	*ft_strs_to_tab(int ac, char **av);
void		ft_show_tab(struct s_stock_str *par);

int	main(void)
{

	printf("----- EX04 & EX05: ft_strs_to_tab & ft_show_tab -----\n\n");
	char *av1[4] = {"test1", " test2", "test 3", "test564"};
	printf("Size: 4\n");
	printf("Strings to be transformed:\n");
	for (int i = 0; i < 4; i++)
		printf("\"%s\"\n", av1[i]);
	t_stock_str *arr1 = ft_strs_to_tab(4, av1);
	printf("\n");
	printf("Output of ft_show_tab function:\n");
	printf("\n");
	ft_show_tab(arr1);
	printf("\n");
	/************************************************************/
	printf("\n");
	char **av2 = 0;
	printf("Size: 0\n");
	printf("Strings to be transformed:\n");
	t_stock_str *arr2 = ft_strs_to_tab(0, av2);
	printf("\n");
	printf("Output of ft_show_tab function:\n");
	printf("\n");
	ft_show_tab(arr2);
	printf("\n");

	return (0);
}
