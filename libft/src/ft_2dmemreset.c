/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dmemreset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 11:19:18 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/03 11:19:51 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_2dmemreset(void **b, size_t len)
{
	unsigned char	**d;
	size_t			i;

	i = -1;
	d = (unsigned char **)b;
	while (++i < len)
		d[i] = 0;
	return (b);
}
