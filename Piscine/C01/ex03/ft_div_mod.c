/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:55:52 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/15 13:32:23 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* Test function
#include <stdio.h>

int main(void)
{
	int div = 0;
	int mod = 0;

	ft_div_mod(19, 10, &div, &mod);
	printf("%i\n", div);
	printf("%i\n", mod);
} */
