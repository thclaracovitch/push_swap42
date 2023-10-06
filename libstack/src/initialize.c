/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:09:53 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:09:56 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*initialize(unsigned int size)
{
	t_stack	*stack;

	stack = malloc(sizeof(*stack));
	if (!(stack))
		return (NULL);
	stack->array = malloc(size * sizeof(*(stack->array)));
	if (!(stack->array))
		return (NULL);
	stack->size = size;
	stack->top = -1;
	return (stack);
}
