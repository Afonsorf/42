/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:56:57 by afernand          #+#    #+#             */
/*   Updated: 2020/11/03 14:46:32 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}