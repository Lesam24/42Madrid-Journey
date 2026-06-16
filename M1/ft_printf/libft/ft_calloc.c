/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:35:40 by samsanch          #+#    #+#             */
/*   Updated: 2026/05/25 10:35:41 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*arr;
	size_t			i;

	if (n != 0 && size > 18446744073709551615UL / n)
		return (NULL);
	arr = malloc(n * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < (n * size))
	{
		arr[i] = '\0';
		i++;
	}
	return ((void *)arr);
}
