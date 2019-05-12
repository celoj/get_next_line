/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 23:54:00 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/03 12:54:35 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	size_t needlelength;

	if (needle[0] == '\0')
		return ((char *)haystack);
	needlelength = ft_strlen(needle);
	i = -1;
	while (haystack[++i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (++j <= needlelength)
			{
				if (j == needlelength)
					return ((char *)haystack) + i;
				else if (haystack[i + j] != needle[j])
					break ;
			}
		}
	}
	return (0);
}
