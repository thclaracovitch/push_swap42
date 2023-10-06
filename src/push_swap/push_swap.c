/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:31 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:12:33 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack;

	stack = get_stack(argc - 1, &argv[1]);
	index_stack(&stack);
	sort(stack);
	free_stack(stack);
	return (0);
}
