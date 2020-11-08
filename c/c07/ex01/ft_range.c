/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 16:02:16 by afernand          #+#    #+#             */
/*   Updated: 2020/11/07 11:40:51 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		size;
	int		*array;

	i = 0;
	if (min > max)
		return (0);
	else
	{
		size = max - min;
		if (!(array = malloc(sizeof(int) * size)))
			return (0);
		while (i < max - 1)
		{
			array[i] = min;
			i++;
			min++;
		}
		return (array);
	}
}

int		main(void)
{
	int min;
	int max;
	int i;
	int *result;

	min = 50;
	max = 5;
	result = ft_range(min, max);
	printf("The min is: %i\n", min);
	printf("The max is: %i\n", max);

	i = 0;
	while (result[i] != '\0')
	{
		printf("%i\n", result[i]);
		i++;
	}
	return (0);
}
