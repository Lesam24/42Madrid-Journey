/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:46:16 by danipere          #+#    #+#             */
/*   Updated: 2026/07/04 18:08:50 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list *stack)
{
	void	*tmp;

	tmp = stack->content;
	stack->content = stack->next->content;
	stack->next->content = tmp;
}

void	move_sa(t_list **stack_a, t_bench *bench)
{
	if (!(*stack_a)->content || !(*stack_a)->next)
		return ;
	swap (*stack_a);
	bench->moves++;
	bench->sa++;
	ft_putendl_fd("sa", 1);
}

void	move_sb(t_list **stack_b, t_bench *bench)
{
	if (!(*stack_b)->content || !(*stack_b)->next)
		return ;
	swap (*stack_b);
	bench->moves++;
	bench->sb++;
	ft_putendl_fd("sb", 1);
}

void	move_ss(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	if (!(*stack_a)->content || !(*stack_a)->next)
		return ;
	swap (*stack_a);
	if (!(*stack_b)->content || !(*stack_b)->next)
		return ;
	swap (*stack_b);
	bench->moves++;
	bench->ss++;
	ft_putendl_fd("ss", 1);
}
