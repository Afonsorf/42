/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 09:04:57 by afernand          #+#    #+#             */
/*   Updated: 2020/11/09 09:06:07 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_sort_ascii(int argc, char *argv[])
{
	int		i;
	int		n;
	char	*swap;

	i = 1;
	while (i++ < argc)
	{
		n = 1;
		while (++n < argc)
		{
			if (ft_strcmp(argv[n - 1], argv[n]) < 0)
			{
				swap = argv[n - 1];
				argv[n - 1] = argv[n];
				argv[n] = swap;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	ft_sort_ascii(argc, argv);
	while (--i)
	{
		while (*argv[i])
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
