/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fildes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 22:49:08 by afernand          #+#    #+#             */
/*   Updated: 2020/11/11 22:49:11 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		fildes(int argc, char *argv[], int map)
{
	int		fd;

	fd = 1;
	if (argc == 1)
		fd = 0;
	else if ((fd = open(argv[map], O_RDONLY)) == -1)
		write(1, "map error\n", 10);
	return (fd);
}
