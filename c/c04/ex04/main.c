/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:21:23 by afernand          #+#    #+#             */
/*   Updated: 2020/11/04 14:51:59 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int main(void)
{
	int nbr;
	char *base;

	nbr = 10;
	base = "0123456789ABCDEF";
	ft_putnbr_base(nbr, base);
	
	return 0;
}
