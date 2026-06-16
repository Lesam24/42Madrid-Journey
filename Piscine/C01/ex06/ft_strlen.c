/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:57:19 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/15 17:18:13 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
		i++;
	return (i);
}

/* Test Function
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strlen("patata"));
} */
