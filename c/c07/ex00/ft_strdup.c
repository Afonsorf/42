/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 16:02:16 by afernand          #+#    #+#             */
/*   Updated: 2020/11/06 16:39:40 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(str = malloc(sizeof(char) * i)))
		return (0);
	str = src;
	return (str);
}

int		main(void)
{
	char *src;

	src = "abcde";
	printf("The command output is: %s\n", strdup(src));
	printf("the function output is: %s\n", ft_strdup(src));
}
