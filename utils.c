/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedobos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:36:44 by pedobos           #+#    #+#             */
/*   Updated: 2018/01/12 17:36:48 by pedobos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	error(void)
{
	ft_putendl("error");
	exit(EXIT_FAILURE);
}

int		count_tetriminos(char *str)
{
	int		i;
	int		nl;

	nl = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			nl++;
		i++;
	}
	return ((nl + 1) / 5);
}

int		count_nr(char **str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	convert_hash(char **tetris, int i, int j)
{
	char	c;

	c = 'A';
	while (tetris[j] != '\0')
	{
		while (tetris[j][i] != '\0')
		{
			if (tetris[j][i] == '#')
				tetris[j][i] = c;
			i++;
		}
		i = 0;
		c++;
		j++;
	}
	if (c > 'Z' + 1)
		error();
}

int		count_dots(char *str)
{
	int i;

	i = 0;
	while (str[i] == '.')
		i++;
	return (i);
}
