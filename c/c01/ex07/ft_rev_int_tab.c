/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:03:25 by afernand          #+#    #+#             */
/*   Updated: 2020/10/29 11:15:01 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int index;
	int last;

	index = 0;
	last = size - 1;
	while (index < size / 2)
	{
		tmp = tab[index];
		tab[index] = tab[last];
		tab[last] = tmp;
		index++;
		last--;
	}
}
