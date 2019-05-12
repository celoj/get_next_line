/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 17:07:34 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/02 14:01:40 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	num;
	char	*result;
	size_t	resultlen;

	num = (long)n;
	result = 0;
	resultlen = ft_numlength(num);
	if (!(result = ft_strnew(resultlen)))
		return (0);
	if (num == 0)
		result[0] = '0';
	else if (num < 0)
	{
		num *= -1;
		result[0] = '-';
	}
	while (num > 0)
	{
		result[--resultlen] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}
