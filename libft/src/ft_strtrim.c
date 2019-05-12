/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:52:08 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/02 15:39:44 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start_index;
	int		end_index;
	char	*result;

	if (!s)
		return (0);
	i = 0;
	result = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	start_index = i;
	i = ft_strlen(s);
	while (i > 0 && (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'))
		i--;
	end_index = i == 0 ? ft_strlen(s) : i;
	if (!(result = ft_strnew(end_index - start_index)))
		return (0);
	i = -1;
	while (++i < (end_index - start_index))
		result[i] = s[start_index + i];
	result[i] = '\0';
	return (result);
}
