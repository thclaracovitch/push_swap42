/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:59:01 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:59:02 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(reject) + 1;
	while (!ft_memchr(reject, s[i], n))
		i++;
	return (i);
}
