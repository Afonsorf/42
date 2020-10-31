/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:41:55 by afernand          #+#    #+#             */
/*   Updated: 2020/10/30 16:48:37 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_capitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{

		// falta considcoes para ver se e upper, lower, nuero etc mas funciona!
		if(str[i] == ' ')
		{
			str[i + 1] += 32;
		}
		i++;
	}
	return (str);
}
