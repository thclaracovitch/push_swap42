/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:04:55 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:04:57 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok_r(char *str, const char *delim, char **save_ptr)
{
	char	*end;

	if (str == NULL)
		str = *save_ptr;
	if (*str == '\0')
	{
		*save_ptr = str;
		return (NULL);
	}
	str += ft_strspn(str, delim);
	if (*str == '\0')
	{
		*save_ptr = str;
		return (NULL);
	}
	end = str + ft_strcspn(str, delim);
	if (*end == '\0')
	{
		*save_ptr = end;
		return (str);
	}
	*end = '\0';
	*save_ptr = end + 1;
	return (str);
}
