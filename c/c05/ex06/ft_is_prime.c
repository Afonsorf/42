/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:37:59 by afernand          #+#    #+#             */
/*   Updated: 2020/11/09 11:42:29 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	flag;

	i = 2;
	flag = 0;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag == 0)
		return (1);
	else
		return (0);
}
