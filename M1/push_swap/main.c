/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <samsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 01:21:51 by danipere          #+#    #+#             */
/*   Updated: 2026/07/23 14:53:47 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_flag	flags;
	t_bench	bench;

	if (argc == 1)
		return (0);
	pre_init_stack(&flags, &stack_a, &stack_b);
	if (!stack_initialization(&stack_a, argv, &flags))
	{
		free(flags.run_flag);
		return (ft_putendl_fd("Error", 2), 1);
	}
	init_bench(&bench, stack_a);
	if (flags.bench)
		bench.initialized = True;
	run_algorithm(&stack_a, &stack_b, &flags, &bench);
	if (flags.bench)
		print_bench(&bench, &flags);
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	free(flags.run_flag);
	return (0);
}
