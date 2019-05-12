/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:44:26 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/03 21:15:12 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_tokens(char const *s, char c)
{
	size_t i;
	size_t token_count;

	i = 0;
	token_count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			token_count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (token_count);
}

static size_t	gntl(char const *s, char c, size_t start)
{
	size_t length;

	length = 0;
	while (s[start + length] && s[start + length] != c)
		length++;
	return (length);
}

static char		**alloc_failed(char **tokens, size_t token_count)
{
	ft_free2darr(tokens, token_count);
	return (0);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tokens;
	size_t	s_index;
	size_t	token_index;
	size_t	token_count;
	size_t	j;

	if (!s)
		return (0);
	token_count = count_tokens(s, c) + 1;
	if (!(tokens = (char **)ft_memalloc(token_count * sizeof(*tokens))))
		return (0);
	tokens[token_count - 1] = 0;
	token_index = -1;
	s_index = 0;
	while (++token_index < token_count - 1)
	{
		while (s[s_index] == c)
			s_index++;
		if (!(tokens[token_index] = ft_strnew(gntl(s, c, s_index))))
			return (alloc_failed(tokens, token_index));
		j = 0;
		while (j < gntl(s, c, s_index - j))
			tokens[token_index][j++] = s[s_index++];
	}
	return (tokens);
}
