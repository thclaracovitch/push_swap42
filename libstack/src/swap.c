/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:10:55 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:10:57 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	swap(t_stack *stack)
{
	int	aux;

	if (stack->top <= 0)
		return ;
	aux = stack->array[stack->top];
	stack->array[stack->top] = stack->array[stack->top - 1];
	stack->array[stack->top - 1] = aux;
}
