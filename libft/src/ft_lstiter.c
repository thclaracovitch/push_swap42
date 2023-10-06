/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:51:55 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:51:57 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates over all list elements,
** applying the f function to each
** element content.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		f(lst->content);
		ft_lstiter(lst->next, f);
	}
}
