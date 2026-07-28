/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:46:01 by danipere          #+#    #+#             */
/*   Updated: 2026/07/04 18:08:30 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **stack_1, t_list **stack_2)
{
	t_list	*tmp;

	tmp = *stack_2;
	*stack_2 = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(stack_1, tmp);
}

void	move_pa(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	push(stack_a, stack_b);
	bench->moves++;
	bench->pa++;
	ft_putendl_fd("pa", 1);
}

void	move_pb(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	push(stack_b, stack_a);
	bench->moves++;
	bench->pb++;
	ft_putendl_fd("pb", 1);
}
