/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 14:28:54 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/21 12:34:24 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temporal;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temporal = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temporal;
			}
			j++;
		}
		i++;
	}
}
/* Test Function
#include <stdio.h>
int	main(void)
{
	int x = 6;
	int prueba[] = {4, 2, 1, 3, 6, 5};
	ft_sort_int_tab(prueba, x);
	
	int i = 0;
	while (i < x)
	{
		printf("%d", prueba [i]);
		i++;
	}
	return (0);
} */
