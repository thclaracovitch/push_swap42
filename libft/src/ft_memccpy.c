/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:54:34 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:54:36 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = -1;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (++i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (dst + i + 1);
	}
	return (0);
}
