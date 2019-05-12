/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 10:01:29 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/01 15:12:43 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*mem;

	if (!(mem = (char *)malloc(size * sizeof(char))))
		return (0);
	i = 0;
	while (i < size)
		mem[i++] = 0;
	return (mem);
}
