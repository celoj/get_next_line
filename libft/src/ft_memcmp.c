/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:26:02 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/03 12:25:59 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	if (n == 0 || s1 == s2)
		return (0);
	i = -1;
	while (++i < n)
	{
		c1 = ((char *)s1)[i];
		c2 = ((char *)s2)[i];
		if (c1 != c2)
			break ;
	}
	return (c1 - c2);
}
