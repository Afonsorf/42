/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:01:34 by afernand          #+#    #+#             */
/*   Updated: 2020/11/09 07:59:42 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	result = 1;
	i = 1;
	if (power < 0)
		return (0);
	else
		while (i <= power)
		{
			result *= nb;
			i++;
		}
	return (result);
}
