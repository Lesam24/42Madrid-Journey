/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:04:31 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/27 12:07:11 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			write(1, " ", 1);
			ft_putchar((j / 10) + '0');
			ft_putchar((j % 10) + '0');
			if (((i / 10) != 9) || ((i % 10) != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}

/* Test Function
int	main(void)
{
	ft_print_comb2();
	return (0);
} */
