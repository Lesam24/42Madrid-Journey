/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 13:16:36 by danipere          #+#    #+#             */
/*   Updated: 2026/07/23 14:18:09 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H 
# include "libft/libft.h"
# include "parsing.h"

typedef struct s_bench
{
	int		moves;
	int		pa;
	int		pb;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
	int		sa;
	int		sb;
	int		ss;
	float	disorder;
	t_bool	initialized;
}	t_bench;

typedef struct s_flag	t_flag;

/* PUSH */
void	move_pa(t_list **stack_a, t_list **stack_b, t_bench *bench);
void	move_pb(t_list **stack_a, t_list **stack_b, t_bench *bench);
/* ROTATE */
void	move_ra(t_list **stack_a, t_bench *bench);
void	move_rb(t_list **stack_b, t_bench *bench);
void	move_rr(t_list **stack_a, t_list **stack_b, t_bench *bench);
/* REVERSE ROTATE */
void	move_rra(t_list **stack_a, t_bench *bench);
void	move_rrb(t_list **stack_b, t_bench *bench);
void	move_rrr(t_list **stack_a, t_list **stack_b, t_bench *bench);
/* SWAP */
void	move_sa(t_list **stack_a, t_bench *bench);
void	move_sb(t_list **stack_b, t_bench *bench);
void	move_ss(t_list **stack_a, t_list **stack_b, t_bench *bench);
/* PUSH SWAP */
int		get_min(t_list **stack);
int		get_max(t_list **stack);
int		get_index(t_list **stack, int nb);
int		get_value(t_list **stack, int index);
void	push_back(t_list **stack_b, t_list **stack_a, t_bench *bench);
/* ALGORYTHMS */
void	simple(t_list **stack_a, t_list **stack_b, t_bench *bench);
void	medium(t_list **stack_a, t_list **stack_b, t_bench *bench);
void	complex(t_list **stack_a, t_list **stack_b, t_bench *bench);
void	adaptive(t_list **stack_a, t_list **stack_b, t_bench *bench);
void	small_numbers(t_list **a, t_list **b, int size_a, t_bench *bench);

/* BENCHMARK */
void	init_bench(t_bench *bench, t_list *stack);
void	print_bench(t_bench *bench, t_flag *flags);
float	compute_disorder(t_list **stack_a);

#endif