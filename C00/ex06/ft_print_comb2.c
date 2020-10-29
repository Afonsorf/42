/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 15:14:41 by afernand          #+#    #+#             */
/*   Updated: 2020/10/26 15:15:00 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(int num)
{
	if (num < 10)
	{
		ft_putchar('0');
		ft_putchar(num + '0');
	}
	else
	{
		ft_putchar(num / 10 + '0');
		ft_putchar(num % 10 + '0');
	}
}

void	print_pair(int p1, int p2)
{
	print_num(p1);
	ft_putchar(' ');
	print_num(p2);
	if (p1 != 98 || p2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int pair1;
	int pair2;

	pair1 = 0;
	while (pair1 <= 99)
	{
		pair2 = pair1;
		while (pair2 <= 99)
		{
			if (pair1 != pair2)
			{
				print_pair(pair1, pair2);
			}
			pair2++;
		}
		pair1++;
	}
}
