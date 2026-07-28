/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <samsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 20:36:41 by samsanch          #+#    #+#             */
/*   Updated: 2026/07/23 14:53:17 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "push_swap.h"

void	pre_init_stack(t_flag *flags, t_list **stack_a, t_list **stack_b)
{
	*stack_a = NULL;
	*stack_b = NULL;
	flags->bench = False;
	flags->run_flag = NULL;
}

t_bool	stack_initialization(t_list **stack_a, char **argv, t_flag *flags)
{
	char	**nb_array;
	int		*ranked;
	int		*temp;

	nb_array = extract_numbers(argv + 1, flags);
	if (!nb_array)
		return (False);
	if (flags->run_flag == NULL)
		return (free_array(nb_array), False);
	temp = argv_parsing(nb_array);
	if (!temp)
		return (free_array(nb_array), False);
	ranked = ft_rank(temp);
	free_array(nb_array);
	if (!ranked)
		return (False);
	if (!fill_stack(ranked, stack_a))
	{
		free(ranked);
		return (free(temp), False);
	}
	free(ranked);
	return (free(temp), True);
}

void	run_algorithm(t_list **a, t_list **b, t_flag *flags, t_bench *bench)
{
	int	size_a;

	if (compute_disorder(a) == 0.0)
		return ;
	size_a = ft_lstsize(*a);
	if (size_a <= 5)
		small_numbers(a, b, size_a, bench);
	else if (!ft_strncmp(flags->run_flag, "--simple", 9))
		simple(a, b, bench);
	else if (!ft_strncmp(flags->run_flag, "--medium", 9))
		medium(a, b, bench);
	else if (!ft_strncmp(flags->run_flag, "--complex", 10))
		complex(a, b, bench);
	else if (!ft_strncmp(flags->run_flag, "--adaptive", 13))
		adaptive(a, b, bench);
}
