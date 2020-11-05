/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:06:35 by afernand          #+#    #+#             */
/*   Updated: 2020/11/05 16:38:19 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		count;

	if (argc > 1)
	{
		count = argc - 1;
		while (count > 0)
		{
			i = 0;
			while (argv[count][i] != '\0')
			{
				write(1, &argv[count][i], 1);
				i++;
			}
			write(1, "\n", 1);
			count--;
		}
	}
	return (0);
}
