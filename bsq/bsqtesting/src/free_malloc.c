/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 22:49:19 by afernand          #+#    #+#             */
/*   Updated: 2020/11/11 22:49:21 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_malloc(int **s, int i, int row)
{
	while (i < row)
	{
		free(s[i]);
		i++;
	}
	free(s);
}
