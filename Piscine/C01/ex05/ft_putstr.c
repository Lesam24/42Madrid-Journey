/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:54:23 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/15 16:28:42 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* Test Function
int	main(void)
{
	ft_putstr("this is a test");
} */
