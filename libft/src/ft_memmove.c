/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 13:48:08 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/02 21:29:09 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = len;
	if (j > 0)
	{
		if (src < dst)
		{
			while (--j > 0)
				((char *)dst)[j] = ((char *)src)[j];
			((char *)dst)[0] = ((char *)src)[0];
		}
		else
			while (i < j)
			{
				((char *)dst)[i] = ((char *)src)[i];
				i++;
			}
	}
	return (dst);
}
