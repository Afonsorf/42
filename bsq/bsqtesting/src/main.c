/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 22:49:32 by afernand          #+#    #+#             */
/*   Updated: 2020/11/11 22:49:32 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int main(int argc, char **argv)
{
	int		fd;
	int 	i;
	int		j;
	int 	n;
	short	**matrix;   				
	char 	*eof;
	char 	buf;
	int		row;
	int 	col;
	int 	c;
	int		map;

	map = 1;
	while(map < argc)
	{
		n = 0;
		col = 0;
		row = 0;
		if ((fd = fildes(argc, argv, map)) == -1)
			return(1);
		while (read(fd, &buf, 1) && buf != '\n') 						
			n++;
		if (!(eof = malloc(sizeof(char) * 4)))			
			return (1);
		while (read(fd, &buf, 1) && buf != '\n')
			col++;

			close(fd);
		i = 0;
		c = 0;
		if ((fd = open(argv[map], O_RDONLY)) == -1)
			return(1);
		
		while (read(fd, &buf, 1) && buf != '\n')
		{
			if (i < n - 3)
				row = row * 10 + buf - '0';
			else
			{
				eof[c] = buf;
				c++;
			}
			i++;
		}



		eof[c] = '\0';
		if (!( matrix = malloc(sizeof(short*) * row)))				
			return (1);
		i = 0;
		while (i < row)
		{
			if (!( matrix[i] = malloc(sizeof(short) *(col + 1))))			
				return(1);
			i++;
		}
		j = 0;
		while(j < row)
		{
			i = 0;
			while (read(fd, &buf, 1) && buf != '\n')
			{
				if( buf == eof[0])
					matrix[j][i] = 1;
				else if(buf == eof[1])
					matrix[j][i] = 0;
				i++;
			}
			j++;
		}
		close(fd);
		print_bsq(matrix, row, col, eof);				
		while(i < row)
		{
			free(matrix[i]);
			i++;
		}
		free(matrix);
		free(eof);
		map++;
		if (map != argc)
			write(1, "\n", 1);
	}
	return (0);
}
