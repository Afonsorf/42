/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:59:30 by afernand          #+#    #+#             */
/*   Updated: 2020/11/08 18:00:16 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char	*valid_dict(int argc, char *argv[])
{
	char	*dict;
    int     fildes;
    int     curr_char;
    char    buf;
    char    *dict_nbr;

	if (argc == 2)
		dict = "numbers.dict";
	else
		dict = argv[1];

    if ((fildes = open(dict, O_RDONLY)) == -1)
            return (0);
    curr_char = 0;
    while (read(fildes, &buf, 1))
    {
        while ((buf != ':' || buf != ' '))
        {
            dict_nbr[curr_char] = buf;
            curr_char++;
        }
         while (read(fildes, &buf, 1))
        {
            if (buf == '\n')
                break ;
        }
    dict_nbr[curr_char] = '\0';
    }
    close(dict);
    return (dict_nbr);
}

int		valid_nbr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9') || i > 40)
			return (0);
		i++;
	}
	return (i);
}

char	*input_alloc(char *str)
{
	int *input;

	if (!(input = malloc(sizeof(char) * (valid_nbr(str)))))
		return (0);
	input = str;
	return (input);
}
