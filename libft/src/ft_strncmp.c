/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:03:05 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:03:08 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	else if ((*s1 != *s2) || !*s1)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (ft_strncmp(++s1, ++s2, --n));
}
