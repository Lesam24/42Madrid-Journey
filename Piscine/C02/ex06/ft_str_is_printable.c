/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:50:07 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/23 18:20:35 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (!(str[i] == '\0'))
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}
/* Test Function
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_str_is_printable("jejFS~"));
	printf("%d\n", ft_str_is_printable("aaaaaaaaa"));
	printf("%d\n", ft_str_is_printable("FFFFFFFFFFFF"));
	printf("%d\n", ft_str_is_printable("áááá"));
	return (0);
} */
