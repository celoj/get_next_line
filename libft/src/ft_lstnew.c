/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 20:54:36 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/03 11:21:01 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	if (!(node = (t_list *)ft_memalloc(sizeof(t_list))))
		return (0);
	if (content == 0)
	{
		node->content = 0;
		node->content_size = 0;
	}
	else
	{
		node->content = ft_memalloc(content_size);
		ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	node->next = 0;
	return (node);
}
