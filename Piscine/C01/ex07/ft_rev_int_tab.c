/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:19:13 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/21 18:03:33 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*start;
	int	*finish;
	int	temporal;

	temporal = 0;
	start = tab;
	finish = tab + size - 1;
	while (start < finish)
	{
		temporal = *start;
		*start = *finish;
		*finish = temporal;
		start++;
		finish--;
	}
}

/* Test function
#include <stdio.h>

int	main()
{
	int x = 6;
	int prueba[] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(prueba, x);

	int i = 0;
	while (i < x)
	{
		printf("%d", prueba[i]);
		i++;
	}
	return (0);
} */
