/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedobos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 11:55:08 by pedobos           #+#    #+#             */
/*   Updated: 2017/12/18 11:57:56 by pedobos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char *str, char sep)
{
	int res;
	int i;

	i = 0;
	res = 0;
	while (str[i] && str[i] == sep)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != sep)
			i++;
		res++;
		while (str[i] && str[i] == sep)
			i++;
	}
	return (res);
}
