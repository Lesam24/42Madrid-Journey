/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_adaptive.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:25:48 by danipere          #+#    #+#             */
/*   Updated: 2026/07/15 18:54:13 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	compute_disorder(t_list **stack_a)
{
	int		i;
	int		j;
	int		size;
	float	mistakes;
	float	total_pairs;

	i = 0;
	mistakes = 0;
	total_pairs = 0;
	size = ft_lstsize(*stack_a);
	if (size == 1)
		return (0.0);
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			total_pairs += 1;
			if (get_value(stack_a, i) > get_value(stack_a, j))
				mistakes += 1;
			j++;
		}
		i++;
	}
	return (mistakes / total_pairs);
}

void	adaptive(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	float	disorder;

	disorder = compute_disorder(stack_a);
	if (disorder < 0.2)
		simple(stack_a, stack_b, bench);
	else if (disorder < 0.5)
		medium(stack_a, stack_b, bench);
	else
		complex(stack_a, stack_b, bench);
}
