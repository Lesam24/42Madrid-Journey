/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <samsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 20:19:25 by samsanch          #+#    #+#             */
/*   Updated: 2026/07/23 12:08:26 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

static int	is_flag(char *str)
{
	if (!ft_strncmp(str, "--simple", 9))
		return (1);
	if (!ft_strncmp(str, "--medium", 9))
		return (2);
	if (!ft_strncmp(str, "--complex", 10))
		return (3);
	if (!ft_strncmp(str, "--adaptive", 11))
		return (4);
	if (!ft_strncmp(str, "--bench", 8))
		return (5);
	return (0);
}

static t_bool	parse_flag(char *arg, t_flag *flags)
{
	int	type;

	type = is_flag(arg);
	if (type == 0)
		return (False);
	if (type == 5)
		flags->bench = True;
	else
	{
		if (flags->run_flag != NULL)
			return (False);
		flags->run_flag = ft_strdup(arg);
		if (!flags->run_flag)
			return (False);
	}
	return (True);
}

static int	count_numbers(char **argv)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (argv[i])
	{
		if (!is_flag(argv[i]))
			count++;
		i++;
	}
	return (count);
}

char	**extract_numbers(char **argv, t_flag *flags)
{
	char	**result;
	int		i;
	int		j;

	result = malloc(sizeof(char *) * (count_numbers(argv) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (argv[i])
	{
		if (is_flag(argv[i]))
		{
			if (!parse_flag(argv[i], flags))
				return (free(result), NULL);
		}
		else
			result[j++] = ft_strdup(argv[i]);
		i++;
	}
	result[j] = NULL;
	if (flags->run_flag == NULL)
		flags->run_flag = ft_strdup("--adaptive");
	return (result);
}
