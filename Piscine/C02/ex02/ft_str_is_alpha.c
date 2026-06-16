/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:38:06 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/27 19:09:25 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')
			&& (!(str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("asds"));
	printf("%d\n", ft_str_is_alpha("aDds"));
	printf("%d\n", ft_str_is_alpha("9"));
	printf("%d\n", ft_str_is_alpha("asdás"));
	return (0);
}
