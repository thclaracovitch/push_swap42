/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:15:43 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:15:45 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

bool	is_sorted(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->top)
	{
		if (stack->array[i + 1] > stack->array[i])
			return (false);
	}
	return (true);
}

void	insertion_sort(int array[], size_t size)
{
	int				i;
	unsigned int	j;
	int				key;

	j = 1;
	while (j < size)
	{
		i = j - 1;
		key = array[j++];
		while (i >= 0 && array[i + 1] < array[i])
		{
			array[i + 1] = array[i];
			array[i--] = key;
		}
	}
}
