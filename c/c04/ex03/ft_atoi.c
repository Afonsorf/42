/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 09:54:43 by afernand          #+#    #+#             */
/*   Updated: 2020/11/03 17:32:57 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int num;
	int minus;
	int flag;

	i = 0;
	num = 0;
	minus = 0;
	flag = 0;
	while (str[i] != '\0' && flag == 0)
	{
		if (str[i] == '-')
			minus++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + ((int)str[i] - '0');
			i++;
			flag = 1;
		}
		i++;
	}
	if (minus % 2 == 0)
		return (num);
	else
		return (-num);
}
