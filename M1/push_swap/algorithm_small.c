/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <samsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 12:06:49 by samsanch          #+#    #+#             */
/*   Updated: 2026/07/23 14:44:11 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	alg_three(t_list **stack_a, t_bench *bench)
{
	int	a;
	int	b;
	int	c;

	a = (*(int *)(*stack_a)->content);
	b = (*(int *)(*stack_a)->next->content);
	c = (*(int *)(*stack_a)->next->next->content);
	if (a > b && b < c && a < c)
		move_sa(stack_a, bench);
	else if (a > b && b > c && a > c)
	{
		move_sa(stack_a, bench);
		move_rra(stack_a, bench);
	}
	else if (a > b && b < c && a > c)
		move_ra(stack_a, bench);
	else if (a < b && b > c && a < c)
	{
		move_sa(stack_a, bench);
		move_ra(stack_a, bench);
	}
	else if (a < b && b > c && a > c)
		move_rra(stack_a, bench);
}

static void	alg_four(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	int	min_pos;

	min_pos = get_index(stack_a, get_min(stack_a));
	if (min_pos == 1)
		move_sa(stack_a, bench);
	else if (min_pos == 2)
	{
		move_ra(stack_a, bench);
		move_ra(stack_a, bench);
	}
	else if (min_pos == 3)
		move_rra(stack_a, bench);
	move_pb(stack_a, stack_b, bench);
	alg_three(stack_a, bench);
	move_pa(stack_a, stack_b, bench);
}

static void	alg_five(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	int	min_pos;

	min_pos = get_index(stack_a, get_min(stack_a));
	if (min_pos == 1)
		move_sa(stack_a, bench);
	else if (min_pos == 2)
	{
		move_ra(stack_a, bench);
		move_ra(stack_a, bench);
	}
	else if (min_pos == 3)
	{
		move_rra(stack_a, bench);
		move_rra(stack_a, bench);
	}
	else if (min_pos == 4)
		move_rra(stack_a, bench);
	move_pb(stack_a, stack_b, bench);
	alg_four(stack_a, stack_b, bench);
	move_pa(stack_a, stack_b, bench);
}

void	small_numbers(t_list **a, t_list **b, int size_a, t_bench *bench)
{
	if (size_a == 2)
		move_sa(a, bench);
	if (size_a == 3)
		alg_three(a, bench);
	if (size_a == 4)
		alg_four(a, b, bench);
	if (size_a == 5)
		alg_five(a, b, bench);
}
