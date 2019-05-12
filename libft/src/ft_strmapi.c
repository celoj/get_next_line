/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:47:38 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/03 13:01:12 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	result = 0;
	if (s && f)
	{
		i = -1;
		if (!(result = ft_strnew(ft_strlen(s))))
			return (0);
		while (s[++i])
			result[i] = f(i, s[i]);
	}
	return (result);
}
