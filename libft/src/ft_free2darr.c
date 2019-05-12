/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2darr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 11:20:22 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/04 21:38:31 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free2darr(char **container, size_t container_size)
{
	size_t i;

	i = 0;
	if (container)
	{
		while (i < container_size)
			if (container[i++])
				free(container[i - 1]);
		free(container);
	}
}
