/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:11:29 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 11:11:30 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include "general.h"
#include "checker.h"

int	main(int argc, char *argv[])
{
	int		status;
	t_stack	*stack;
	char	**instructions;

	status = 0;
	instructions = NULL;
	stack = get_stack(argc - 1, &argv[1]);
	status = get_instructions(&instructions);
	if (status)
		message_and_exit(stack, instructions, status);
	execute(instructions, stack);
	free_array((void **)instructions);
	free_stack(stack);
	return (status);
}
