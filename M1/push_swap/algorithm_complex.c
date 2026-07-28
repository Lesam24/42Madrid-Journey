/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_complex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:45:53 by danipere          #+#    #+#             */
/*   Updated: 2026/07/15 17:24:50 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	complex(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	int	pushed;
	int	window;

	pushed = 1;
	window = (int)ft_square(ft_lstsize(*stack_a)) * 4 / 3;
	while (*stack_a)
	{
		if (*(int *)(*stack_a)->content <= pushed)
		{
			move_pb(stack_a, stack_b, bench);
			move_rb(stack_b, bench);
			pushed++;
		}
		else if (*(int *)(*stack_a)->content <= pushed + window)
		{
			move_pb(stack_a, stack_b, bench);
			pushed++;
		}
		else
			move_ra(stack_a, bench);
	}
	push_back(stack_b, stack_a, bench);
}
