/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:13:29 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:13:31 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"
#include "push_swap.h"

void	sort(t_stack *stack)
{
	t_stack	*new;

	if (is_sorted(stack) || stack->top <= 0)
		return ;
	new = initialize(stack->size);
	if (stack->top < SORT_COMPLEX_LIMIT)
		sort_small(stack, new);
	else
		sort_complex(stack, new);
	free_stack(new);
}
