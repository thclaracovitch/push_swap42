/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfirst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:51:43 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:51:44 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returns the first element
**	of the linked list lst.
*/

t_list	*ft_lstfirst(t_list *lst)
{
	if (!lst)
		return (NULL);
	else if (!(lst->previous))
		return (lst);
	return (ft_lstfirst(lst->previous));
}
