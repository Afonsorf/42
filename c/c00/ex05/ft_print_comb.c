/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 10:27:56 by afernand          #+#    #+#             */
/*   Updated: 2020/10/23 14:49:35 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_write(char a, char b, char c, bool last)
{
	ft_char(a);
	ft_char(b);
	ft_char(c);
	if (last)
	{
		ft_char(',');
		ft_char(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;
	bool last;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				last = !(a == '7' && b == '8' && c == '9');
				ft_write(a, b, c, last);
				c++;
			}
			b++;
		}
		a++;
	}
}
