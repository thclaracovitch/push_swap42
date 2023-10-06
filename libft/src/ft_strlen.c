/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:02:11 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:02:13 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returns the number of characters of
**	nul-terminated string.
*/

size_t	ft_strlen(const char *s)
{
	if (!*s)
		return (0);
	return (ft_strlen(s + 1) + 1);
}
