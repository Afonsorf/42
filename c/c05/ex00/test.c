#include <stdio.h>
#include <stdlib.h>

void test(int *i)
{
	int a = 42;
	*i = a;
}

int main()
{
	int *i;
	i = malloc(sizeof(int));
	test(i);
	printf("%d\n", *i);
	free(i);
	return 0;
}
