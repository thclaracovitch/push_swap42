/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:51:19 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:51:21 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function completely erases a linked
** list t_list with a delete function (*del),
** which deletes the content of the node. The
** head then returns as a NULL pointer.
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!(*lst))
		return ;
	if ((*lst)->next)
		ft_lstclear(&(*lst)->next, del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
