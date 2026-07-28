/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:46:13 by danipere          #+#    #+#             */
/*   Updated: 2026/07/04 18:08:27 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	void	*first;
	t_list	*node;

	node = *stack;
	first = node->content;
	while (node->next)
	{
		node->content = node->next->content;
		node = node->next;
	}
	node->content = first;
}

void	move_ra(t_list **stack_a, t_bench *bench)
{
	rotate(stack_a);
	bench->moves++;
	bench->ra++;
	ft_putendl_fd("ra", 1);
}

void	move_rb(t_list **stack_b, t_bench *bench)
{
	rotate(stack_b);
	bench->moves++;
	bench->rb++;
	ft_putendl_fd("rb", 1);
}

void	move_rr(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	rotate(stack_a);
	rotate(stack_b);
	bench->moves++;
	bench->rr++;
	ft_putendl_fd("rr", 1);
}
