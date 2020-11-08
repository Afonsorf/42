/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:22:00 by afernand          #+#    #+#             */
/*   Updated: 2020/11/06 13:34:33 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int count;
	int flag;

	count = 0;
	flag = 0;


	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][count] != '\0' &&  flag == 0)
	{
		while (argv[1][count] >= 33 && argv[1][count] <= 126 | argv[1][count] != '\0') 
		{
			write(1, &argv[1][count], 1);
			count++;	
			flag = 1;
		}
	count++;
	}
	write(1, "\n", 1);
}
