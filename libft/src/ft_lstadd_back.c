/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:50:52 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:50:54 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Push new element to the linked list
** end, without changing its head.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		new->previous = last;
		last->next = new;
	}
}
