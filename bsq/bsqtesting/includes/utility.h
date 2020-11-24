/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernand <afernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 22:48:49 by afernand          #+#    #+#             */
/*   Updated: 2020/11/11 22:48:49 by afernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITY_H
# define UTILITY_H

void	free_malloc(int **s, int i, int row);
int		min(int a, int b, int c);
int		fildes(int argc, char *argv[], int map);
void	print_bsq(short **m, int row, int col, char *eof);
int		**set_first(int row, int col, short **m, int **s);

#endif
