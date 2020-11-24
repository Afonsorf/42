/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:22:42 by afernand          #+#    #+#             */
/*   Updated: 2020/11/10 12:22:44 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	ft_strlen(char *str)
{
	long long i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char		*ft_strcat(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char		*str;
	char		*rot;
	int			i;
	long long	cont;

	if (size == 0)
	{
		str = (malloc(sizeof(int)));
		str[0] = 0;
		return (str);
	}
	cont = 0;
	i = 0;
	while (i < size)
		cont = cont + ft_strlen(strs[i++]);
	str = malloc(sizeof(char) * (cont + (size - 1) * ft_strlen(sep) + 1));
	rot = ft_strcat(str, strs[0]);
	i = 1;
	while (i < size)
	{
		rot = ft_strcat(rot, sep);
		rot = ft_strcat(rot, strs[i++]);
	}
	*rot = 0;
	return (str);
}
