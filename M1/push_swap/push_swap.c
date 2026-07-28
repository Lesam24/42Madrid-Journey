/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:58:57 by danipere          #+#    #+#             */
/*   Updated: 2026/07/15 18:27:48 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_list **stack)
{
	t_list	*node;
	int		nb;

	node = *stack;
	nb = *(int *)node->content;
	while (node)
	{
		if (*(int *)node->content < nb)
			nb = *(int *)node->content;
		node = node->next;
	}
	return (nb);
}

int	get_max(t_list **stack)
{
	t_list	*node;
	int		nb;

	node = *stack;
	nb = *(int *)node->content;
	while (node)
	{
		if (*(int *)node->content > nb)
			nb = *(int *)node->content;
		node = node->next;
	}
	return (nb);
}

int	get_index(t_list **stack, int nb)
{
	int		i;
	t_list	*node;

	i = 0;
	node = *stack;
	while (node)
	{
		if (*(int *)node->content == nb)
			return (i);
		i++;
		node = node->next;
	}
	return (nb);
}

int	get_value(t_list **stack, int index)
{
	int		i;
	t_list	*node;

	i = 0;
	if (index >= ft_lstsize(*stack) || !stack)
		return (-1);
	node = *stack;
	while (i < index)
	{
		node = node->next;
		i++;
	}
	return (*(int *)node->content);
}
