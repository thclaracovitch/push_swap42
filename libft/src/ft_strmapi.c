/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:02:42 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:02:44 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*map;

	if (!s)
		return (NULL);
	i = -1;
	map = malloc((ft_strlen(s) + 1) * sizeof(*map));
	if (!map)
		return (NULL);
	while (++i < ft_strlen(s))
		map[i] = f(i, s[i]);
	map[i] = '\0';
	return (map);
}
