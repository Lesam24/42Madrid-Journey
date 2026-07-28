/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_argv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <samsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 18:19:50 by samsanch          #+#    #+#             */
/*   Updated: 2026/07/23 14:09:29 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

static char	*copy_number(char *str)
{
	if (!is_valid_number(str) || !is_int(str))
		return (NULL);
	return (ft_strdup(str));
}

static t_bool	add_split(char **temp, int *result, int *count)
{
	int		j;
	char	*copy;

	if (!temp || !temp[0])
		return (False);
	j = 0;
	while (temp[j])
	{
		copy = copy_number(temp[j]);
		if (!copy)
		{
			free(result);
			free_array(temp);
			return (False);
		}
		result[(*count)++] = ft_atoi(copy);
		free(copy);
		j++;
	}
	free_split(temp, j - 1);
	return (True);
}

int	*argv_parsing(char **str)
{
	char	**temp;
	int		*result;
	int		count;
	int		i;

	if (!str)
		return (NULL);
	result = malloc(sizeof(int) * (count_words(str) + 1));
	if (!result || !count_words(str))
	{
		if (result)
			free(result);
		return (NULL);
	}
	i = -1;
	count = 0;
	while (str[++i])
	{
		temp = ft_split(str[i], ' ');
		if (!add_split(temp, result, &count))
			return (NULL);
	}
	result[count] = -1;
	return (result);
}

static t_bool	is_in_stack(t_list *stack, int value)
{
	while (stack)
	{
		if (*(int *)stack->content == value)
			return (True);
		stack = stack->next;
	}
	return (False);
}

t_bool	fill_stack(int *numbers, t_list **stack_a)
{
	int		i;
	int		n;
	t_list	*node;
	int		*value;

	i = 0;
	while (numbers[i] != -1)
	{
		n = numbers[i];
		if (is_in_stack(*stack_a, n))
		{
			ft_lstclear(stack_a, free);
			return (False);
		}
		value = malloc(sizeof(int));
		*value = n;
		node = ft_lstnew((value));
		ft_lstadd_back(stack_a, node);
		i++;
	}
	return (True);
}
