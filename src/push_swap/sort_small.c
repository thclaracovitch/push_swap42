/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:13:58 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:14:00 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_tri(t_stack *a)
{
	int	*arr;

	arr = a->array;
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] < arr[0])
		run(SA, a, NULL);
	else if (arr[0] < arr[1] && arr[1] < arr[2] && arr[2] > arr[0])
	{
		run(SA, a, NULL);
		run(RRA, a, NULL);
	}
	else if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] > arr[0])
		run(RA, a, NULL);
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[2] < arr[0])
	{
		run(SA, a, NULL);
		run(RA, a, NULL);
	}
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[2] > arr[0])
		run(RRA, a, NULL);
}

static void	put_top_in_position(t_stack *a, t_stack *b)
{
	int	top_b;
	int	to_move;

	top_b = b->array[b->top];
	to_move = closest_above(a, top_b);
	if (to_move == top_b)
		to_move = min(a);
	smart_rotate_a(a, to_move);
	run(PA, a, b);
}

static void	sort_tri_complex(t_stack *a, t_stack *b)
{
	run_n(PB, a, b, a->top - 2);
	sort_tri(a);
	while (b->top >= 0)
		put_top_in_position(a, b);
	smart_rotate_a(a, 0);
}

void	sort_small(t_stack *a, t_stack *b)
{
	if (a->top == 1)
		run(SA, a, NULL);
	else if (a->top == 2)
		sort_tri(a);
	else
		sort_tri_complex(a, b);
}
