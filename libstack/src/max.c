/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:10:07 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:10:09 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

static int	_max(int *array, size_t len)
{
	int	m;

	if (len == 1)
		return (array[0]);
	m = _max(array, len - 1);
	if (array[len - 1] > m)
		m = array[len - 1];
	return (m);
}

int	max(t_stack *stack)
{
	return (_max(stack->array, stack->top + 1));
}
