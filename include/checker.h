/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:45:51 by thclarac          #+#    #+#             */
/*   Updated: 2023/10/05 10:45:54 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "stack.h"

# define INSTRUCTIONS_BUFFER_SIZE 4096

int	binary_search(int n, int *data, int size);
int	get_instructions(char ***instructions);
int	execute(char **instructions, t_stack *stack);

#endif
