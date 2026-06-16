/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:50:56 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/21 17:06:41 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temporal;

	temporal = *a;
	*a = *a / *b;
	*b = temporal % *b;
}

/* Test Function
#include <stdio.h>

int	main(void)
{
	int a = 19;
	int b = 10;
	ft_ultimate_div_mod(&a, &b);

	printf("%i\n", a);
	printf("%i", b);
} */
