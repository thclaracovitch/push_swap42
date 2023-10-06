/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:50:20 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:50:23 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Check if a char is ASCII space, tabulation, carriage return
**  or another space character as defined in isspace(3).
*/

int	ft_isspace(char str)
{
	return (str == 0x20 || (str >= 0x09 && str <= 0x0d));
}
