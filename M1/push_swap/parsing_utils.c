/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:50:28 by samsanch          #+#    #+#             */
/*   Updated: 2026/07/15 14:36:34 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

t_bool	is_valid_number(char *str)
{
	int	i;

	if (!str)
		return (False);
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (False);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (False);
		i++;
	}
	return (True);
}

void	free_split(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
}

int	count_words(char **argv)
{
	int		i;
	int		j;
	int		word_count;
	char	**temp;

	i = 0;
	word_count = 0;
	while (argv[i])
	{
		temp = ft_split(argv[i], ' ');
		j = 0;
		while (temp[j])
		{
			word_count++;
			j++;
		}
		free_split(temp, j);
		i++;
	}
	return (word_count);
}

t_bool	is_int(char *argv)
{
	long	temp;

	if (ft_strlen(argv) > 11)
		return (False);
	temp = ft_atol(argv);
	if (temp > INT_MAX || temp < INT_MIN)
		return (False);
	return (True);
}

void	free_array(char **array)
{
	int	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
