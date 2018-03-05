/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedobos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 12:04:35 by pedobos           #+#    #+#             */
/*   Updated: 2017/12/15 20:21:27 by pedobos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			len;
	char			*mem;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	len = ft_strlen(s) - 1;
	while (len > i && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	if (len < i)
		return (mem = ft_strdup(""));
	return (mem = ft_strsub(s, i, len - (size_t)i + 1));
}
