/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedobos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:36:12 by pedobos           #+#    #+#             */
/*   Updated: 2018/01/12 17:36:14 by pedobos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		high_sqrt(int n)
{
	int		size;

	size = 2;
	while (size * size < n)
		size++;
	return (size);
}

void	fillit(char **matrix, int nb)
{
	char	**map;
	int		size;

	size = high_sqrt(nb * 4);
	map = new_square(size);
	while (resolve(matrix, map, 0) == 0)
	{
		size++;
		free_square(map);
		map = new_square(size);
	}
	aff_matrix(map);
}
