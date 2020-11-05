/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:00:56 by afernand          #+#    #+#             */
/*   Updated: 2020/11/05 16:02:30 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		count;

	i = 0;
	count = argc;
	while (argv[0][i] != 0)
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	argv[0][i] = '\0';
	write(1, "\n", 1);
	return (0);
}
