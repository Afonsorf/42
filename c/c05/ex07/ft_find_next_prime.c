/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:20:43 by afernand          #+#    #+#             */
/*   Updated: 2020/11/05 12:00:37 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;
	int flag;

	i = 2;
	flag = 0;
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
        return (nb);
    else
    {
        nb++;
        return(ft_find_next_prime(nb));
    }
}
