/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlength.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 17:03:10 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/01 17:52:18 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlength(long n)
{
	size_t length;

	if (n == 0)
		return (1);
	length = 0;
	if (n < 0)
	{
		length++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}
