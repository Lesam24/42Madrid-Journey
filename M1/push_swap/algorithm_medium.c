/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_medium.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:28:45 by danipere          #+#    #+#             */
/*   Updated: 2026/07/14 16:06:06 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_back(t_list **stack_b, t_list **stack_a, t_bench *bench)
{
	int	max;
	int	index;
	int	size;

	size = ft_lstsize(*stack_b);
	max = get_max(stack_b);
	index = get_index(stack_b, max);
	while (*stack_b)
	{
		if (*(int *)(*stack_b)->content == max)
		{
			move_pa(stack_a, stack_b, bench);
			if (*stack_b)
			{
				max = get_max(stack_b);
				index = get_index(stack_b, max);
				size = ft_lstsize(*stack_b);
			}
		}
		else if (index <= (size / 2))
			move_rb(stack_b, bench);
		else if (index > (size / 2))
			move_rrb(stack_b, bench);
	}
}

void	medium(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	int	root;
	int	i;
	int	checked;
	int	size;

	size = ft_lstsize(*stack_a);
	root = (int)ft_square(size);
	i = 1;
	checked = 0;
	while (*stack_a)
	{
		move_ra(stack_a, bench);
		checked++;
		if (*(int *)(*stack_a)->content < ((root + (root / 2)) * i))
			move_pb(stack_a, stack_b, bench);
		if (checked >= size)
		{
			checked = 0;
			i++;
			size = ft_lstsize(*stack_a);
		}
	}
	push_back(stack_b, stack_a, bench);
}
