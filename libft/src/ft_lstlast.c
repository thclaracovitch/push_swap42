/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:52:08 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:52:09 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returns the last element
**	of the linked list lst.
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	else if (!(lst->next))
		return (lst);
	return (ft_lstlast(lst->next));
}
