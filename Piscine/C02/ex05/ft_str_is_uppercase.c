/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:05:09 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/21 16:07:12 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (!(str[i] == '\0'))
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/* Test Function
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("ASD"));
	printf("%d\n", ft_str_is_uppercase("jJ"));
	printf("%d\n", ft_str_is_uppercase("SDsD"));
} */
