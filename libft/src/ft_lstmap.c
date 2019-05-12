/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 22:55:40 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/02 00:03:39 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *walker;
	t_list *orig;
	t_list *list;

	if (!lst)
		return (0);
	list = f(lst);
	walker = list;
	orig = lst->next;
	while (orig)
	{
		walker->next = f(orig);
		orig = orig->next;
		if (!walker->next)
			return (0);
		walker = walker->next;
	}
	return (list);
}
