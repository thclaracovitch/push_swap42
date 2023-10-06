/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:52:21 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:52:23 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;

	if (!lst)
		return (NULL);
	else
	{
		map = ft_lstnew(f(lst->content));
		if (!map)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		map->next = ft_lstmap(lst->next, f, del);
		return (map);
	}
}
