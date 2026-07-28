/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <samsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:33:17 by samsanch          #+#    #+#             */
/*   Updated: 2026/07/23 14:47:34 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_bench(t_bench *bench, t_list *stack)
{
	bench->moves = 0;
	bench->pa = 0;
	bench->pb = 0;
	bench->ra = 0;
	bench->rb = 0;
	bench->rr = 0;
	bench->rra = 0;
	bench->rrb = 0;
	bench->rrr = 0;
	bench->sa = 0;
	bench->sb = 0;
	bench->ss = 0;
	bench->initialized = False;
	bench->disorder = compute_disorder(&stack);
}

static void	print_bench_disorder(t_bench *bench)
{
	float	disorder;
	int		n;
	int		f;

	disorder = bench->disorder;
	disorder *= 100;
	n = (int)disorder;
	f = (int)(disorder * 100) % 100;
	ft_putstr_fd("[bench] disorder: ", 2);
	ft_putnbr_fd(n, 2);
	ft_putchar_fd('.', 2);
	ft_putnbr_fd(f, 2);
	ft_putendl_fd("%", 2);
}

static void	print_bench_strat(t_flag *flags, t_bench *bench)
{
	if (!ft_strncmp(flags->run_flag, "--simple", 9))
		ft_putstr_fd("[bench] strategy: Simple / O(n²)", 2);
	if (!ft_strncmp(flags->run_flag, "--medium", 9))
		ft_putstr_fd("[bench] strategy: Medium / O(n√n)", 2);
	if (!ft_strncmp(flags->run_flag, "--complex", 10))
		ft_putstr_fd("[bench] strategy: Complex / O(nlog(n))", 2);
	if (!ft_strncmp(flags->run_flag, "--adaptive", 13))
	{
		if (bench->disorder < 0.2)
			ft_putstr_fd("[bench] strategy: Adaptive / O(n²)", 2);
		else if (bench->disorder < 0.5)
			ft_putstr_fd("[bench] strategy: Adaptive / O(n√n)", 2);
		else
			ft_putstr_fd("[bench] strategy: Adaptive / O(nlog(n))", 2);
	}
}

static void	print_bench_moves(t_bench *bench)
{
	ft_putstr_fd("\n[bench] total ops: ", 2);
	ft_putnbr_fd(bench->moves, 2);
	ft_putstr_fd("\n[bench] sa: ", 2);
	ft_putnbr_fd(bench->sa, 2);
	ft_putstr_fd(" sb: ", 2);
	ft_putnbr_fd(bench->sb, 2);
	ft_putstr_fd(" ss: ", 2);
	ft_putnbr_fd(bench->ss, 2);
	ft_putstr_fd(" pa: ", 2);
	ft_putnbr_fd(bench->pa, 2);
	ft_putstr_fd(" pb: ", 2);
	ft_putnbr_fd(bench->pb, 2);
	ft_putstr_fd("\n[bench] ra: ", 2);
	ft_putnbr_fd(bench->ra, 2);
	ft_putstr_fd(" rb: ", 2);
	ft_putnbr_fd(bench->rb, 2);
	ft_putstr_fd(" rr: ", 2);
	ft_putnbr_fd(bench->rr, 2);
	ft_putstr_fd(" rra: ", 2);
	ft_putnbr_fd(bench->rra, 2);
	ft_putstr_fd(" rrb: ", 2);
	ft_putnbr_fd(bench->rrb, 2);
	ft_putstr_fd(" rrr: ", 2);
	ft_putnbr_fd(bench->rrr, 2);
}

void	print_bench(t_bench *bench, t_flag *flags)
{
	print_bench_disorder(bench);
	print_bench_strat(flags, bench);
	print_bench_moves(bench);
}
