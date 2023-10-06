/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:01:19 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:01:22 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	while (*dst && dstsize)
	{
		dst++;
		dstsize--;
		i++;
	}
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	if (dstsize)
		*dst++ = '\0';
	return (i + len);
}
