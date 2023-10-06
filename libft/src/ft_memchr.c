/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:54:54 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:54:56 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (!n)
		return (0);
	else if (*(unsigned char *)s == (unsigned char)c)
		return ((void *)s);
	return (ft_memchr(++s, c, --n));
}
