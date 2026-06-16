/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:28:52 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/21 16:10:02 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (!(str[i] == '\0'))
	{
		if (!((str[i] >= '0') && (str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}
/* Test Function
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("a"));
	printf("%d\n", ft_str_is_numeric("1"));
	printf("%d\n", ft_str_is_numeric("asadqw21"));
} */
