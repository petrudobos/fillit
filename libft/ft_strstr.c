/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedobos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 23:36:58 by pedobos           #+#    #+#             */
/*   Updated: 2017/12/11 17:22:25 by pedobos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *a;
	char *b;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		a = (char *)haystack;
		b = (char *)needle;
		while (*b && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
