/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:29:45 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/15 13:42:39 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}

/* Test Function 
#include <stdio.h>

int	main(void)
{

	int a = 10;
	int b = 5;

	ft_swap(&a, &b);

	printf("%i\n", a);
	printf("%i\n", b);
} */
