/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:01:34 by afernand          #+#    #+#             */
/*   Updated: 2020/11/09 07:54:38 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned long factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	else
		while (nb > 0)
		{
			factorial = factorial * nb;
			nb--;
		}
	return (factorial);
}
