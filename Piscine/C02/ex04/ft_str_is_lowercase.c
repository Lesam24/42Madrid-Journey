/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:45:49 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/21 16:10:22 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (!(str[i] == '\0'))
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/* Test Function
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("asd"));
	printf("%d\n", ft_str_is_lowercase("jJ"));
	printf("%d\n", ft_str_is_lowercase("sdSd"));
} */
