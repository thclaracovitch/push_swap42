/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:04:11 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:04:13 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(accept);
	while (ft_memchr(accept, s[i], n))
		i++;
	return (i);
}
