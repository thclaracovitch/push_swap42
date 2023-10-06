/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:46 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:12:48 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "libft.h"

void	run(char *op, t_stack *a, t_stack *b)
{
	if (ft_streq(op, PA))
		push(b, a);
	else if (ft_streq(op, PB))
		push(a, b);
	else if (ft_streq(op, SA))
		swap(a);
	else if (ft_streq(op, SB))
		swap(b);
	else if (ft_streq(op, RA))
		rotate(a);
	else if (ft_streq(op, RB))
		rotate(b);
	else if (ft_streq(op, RRA))
		reverse_rotate(a);
	else if (ft_streq(op, RRB))
		reverse_rotate(b);
	ft_putendl_fd(op, STDOUT_FILENO);
}

void	run_n(char *op, t_stack *a, t_stack *b, int n)
{
	if (n <= 0)
		return ;
	run(op, a, b);
	run_n(op, a, b, n - 1);
}
