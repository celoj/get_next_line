/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:03:44 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/02 15:38:16 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	resultlen;
	char	*result;

	result = 0;
	if (s1 && s2)
	{
		s1len = ft_strlen(s1);
		s2len = ft_strlen(s2);
		resultlen = s1len + s2len;
		if (!(result = ft_strnew(resultlen)))
			return (0);
		ft_strcpy(result, s1);
		ft_strcat(result, s2);
	}
	return (result);
}
