/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:50:19 by danipere          #+#    #+#             */
/*   Updated: 2026/07/04 18:08:46 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rrotate(t_list **stack)
{
	t_list	*penul;
	t_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	penul = *stack;
	while (penul->next && penul->next->next)
		penul = penul->next;
	last = penul->next;
	penul->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	move_rra(t_list **stack_a, t_bench *bench)
{
	rrotate(stack_a);
	bench->moves++;
	bench->rra++;
	ft_putendl_fd("rra", 1);
}

void	move_rrb(t_list **stack_b, t_bench *bench)
{
	rrotate(stack_b);
	bench->moves++;
	bench->rrb++;
	ft_putendl_fd("rrb", 1);
}

void	move_rrr(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	rrotate(stack_a);
	rrotate(stack_b);
	bench->moves++;
	bench->rrr++;
	ft_putendl_fd("rrr", 1);
}
