/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 22:49:00 by afernand          #+#    #+#             */
/*   Updated: 2020/11/11 22:49:03 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_bsq(short **m, int row, int col, char *eof)
{
	int i;
	int j;
	int **s;
	int max_of_s;
	int max_i;
	int max_j;

	if (!(s = malloc(sizeof(int*) * row)))
		return;
	i = 0;
	while (i < row)
	{
		if (!(s[i] = malloc(sizeof(int) * (col + 1))))
			return;
		i++;
	}

	s = set_first(row, col, m, s);

	i = 1;
	while (i < row)
	{
		j = 1;
		while (j < col)
		{
			if (m[i][j] == 1)
				s[i][j] = min(s[i][j - 1], s[i - 1][j], s[i - 1][j - 1]) + 1;
			else
				s[i][j] = 0;
			j++;
		}
		i++;
	}
	max_of_s = s[0][0];
	max_i = 0;
	max_j = 0;
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (max_of_s < s[i][j])
			{
				max_of_s = s[i][j];
				max_i = i;
				max_j = j;
			}
			j++;
		}
		i++;
	}

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if ((i > max_i - max_of_s) && (j > max_j - max_of_s) && (i <= max_i) && (j <= max_j))
			{
				write(1, &eof[2], 1);
				write(1, " ", 1);
			}
			else if (s[i][j] == 0)
			{
				write(1, &eof[1], 1);
				write(1, " ", 1);
			}
			else
			{
				write(1, &eof[0], 1);
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	free_malloc(s, i, row);
}
