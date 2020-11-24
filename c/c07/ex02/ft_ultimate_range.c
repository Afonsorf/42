/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:26:59 by afernand          #+#    #+#             */
/*   Updated: 2020/11/10 12:57:51 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	if (!(buffer = malloc(sizeof(int) * size)))
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < size)
	{
		buffer[index] = min + index;
		index++;
	}
	return (size);
}
