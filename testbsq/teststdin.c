#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void	ft_read_arg(char *filename)
{
	char	c;
	int		check;
	int		fd;

	check = 2;
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0644);
	while (read(1, &c, 1) != -1)
	{
		if (c == 10)
			check--;
		else if (c != 10)
			check = 2;
		if (check != 0)
			write(fd, &c, 1);
		if (check == 0)
			break ;
	}
	close(fd);
}

int main(int argc, char *argv[])
{
	ft_read_arg(argv[1]);
	return(0);
}
