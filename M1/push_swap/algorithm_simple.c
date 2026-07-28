/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_simple.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 14:35:27 by danipere          #+#    #+#             */
/*   Updated: 2026/07/06 19:58:49 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_values(int *min, int *index, int *size, t_list **stack_a)
{
	*min = get_min(stack_a);
	*index = get_index(stack_a, *min);
	*size = ft_lstsize(*stack_a);
}

// O(n^2)
void	simple(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	int	min;
	int	index;
	int	size;

	init_values(&min, &index, &size, stack_a);
	while (*stack_a)
	{
		if (*(int *)(*stack_a)->content == min)
		{
			move_pb(stack_a, stack_b, bench);
			if (*stack_a)
			{
				min = get_min(stack_a);
				index = get_index(stack_a, min);
				size = ft_lstsize(*stack_a);
			}
		}
		else if (index <= (size / 2))
			move_ra(stack_a, bench);
		else if (index > (size / 2))
			move_rra(stack_a, bench);
	}
	while (*stack_b)
		move_pa(stack_a, stack_b, bench);
}
