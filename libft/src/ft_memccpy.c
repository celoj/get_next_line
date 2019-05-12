/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 11:09:46 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/01 15:40:53 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dstcast;
	unsigned char	*srccast;
	size_t			i;

	i = 0;
	dstcast = (unsigned char *)dst;
	srccast = (unsigned char *)src;
	while (i < n)
	{
		dstcast[i] = srccast[i];
		if (srccast[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
