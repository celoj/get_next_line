/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:56:47 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/07 21:22:07 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	result = 0;
	if (s && *s)
	{
		if (!(result = ft_strnew(len)))
			return (0);
		i = -1;
		while (++i < len)
			result[i] = s[start + i];
	}
	return (result);
}
