/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:14:47 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:14:48 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	binary_search(int n, int *data, int size)
{
	int	mid;
	int	left;
	int	right;

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		mid = left + ((right - left) / 2);
		if (data[mid] == n)
			return (true);
		else if (n < data[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (false);
}
