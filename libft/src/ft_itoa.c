/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:50:36 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:50:42 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digit_counter(int n)
{
	if (!(n / 10))
		return (1);
	else
		return (ft_digit_counter(n / 10) + 1);
}

/*
**	Convert an int to its string
**	representation.
*/

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	size_t			len;
	char			*s;

	len = ft_digit_counter(n);
	if (n < 0)
	{
		nbr = -(unsigned int)n;
		len++;
	}
	else
		nbr = (unsigned int)n;
	s = malloc((len + 1) * sizeof(*s));
	if (!s)
		return (NULL);
	s[len] = '\0';
	while (len--)
	{
		s[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
