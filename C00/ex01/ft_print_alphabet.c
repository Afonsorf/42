/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:49:15 by afernand          #+#    #+#             */
/*   Updated: 2020/10/22 17:07:39 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

int main(void)
{
	ft_print_alphabet();
}
