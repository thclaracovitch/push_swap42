/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:59:24 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:59:26 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s;

	i = -1;
	s = malloc((ft_strlen(s1) + 1) * sizeof(*s));
	if (!s1 || !s)
		return (NULL);
	while (s1[++i])
		s[i] = s1[i];
	s[i] = '\0';
	return (s);
}
