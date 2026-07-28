/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <samsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:50:17 by samsanch          #+#    #+#             */
/*   Updated: 2026/07/23 14:53:30 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H 
# include "push_swap.h"

typedef struct s_flag
{
	char	*run_flag;
	t_bool	bench;
}	t_flag;

typedef struct s_bench	t_bench;

/* UTILS */
t_bool	is_valid_number(char *str);
t_bool	is_int(char *argv);
void	free_split(char **s, int i);
void	free_array(char **array);
int		count_words(char **argv);

/* ARGUMENTS */
t_bool	fill_stack(int *numbers, t_list **stack_a);
int		*argv_parsing(char **str);

/* GET ARGUMENTS */
char	**extract_numbers(char **argv, t_flag *flags);

/* INITIALIZE */
void	pre_init_stack(t_flag *flags, t_list **stack_a, t_list **stack_b);
void	run_algorithm(t_list **a, t_list **b, t_flag *flags, t_bench *bench);
t_bool	stack_initialization(t_list **stack_a, char **argv, t_flag *flags);
#endif
