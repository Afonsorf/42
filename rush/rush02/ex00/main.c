/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 15:57:40 by nglerean          #+#    #+#             */
/*   Updated: 2020/11/08 18:00:14 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		valid_nbr(char *str);
char	*input_alloc(char *str);

int		main(int argc, char *argv[])
{
	int		size;

	if (argc > 1 && argc < 4)
	{
		if (!(size = valid_nbr(argv[argc - 1])));
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		if (!cond(argc, argv, input_alloc(argv[argc - 1]), size));
		{
			write(1, "Dict Error\n", 6);
			return (-1);
		}
	}
	else
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	return (0);
}
