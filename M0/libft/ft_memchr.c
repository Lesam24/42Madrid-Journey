/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:14:52 by samsanch          #+#    #+#             */
/*   Updated: 2026/05/20 15:14:52 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t n)
{
	const unsigned char	*temp;
	size_t				i;

	i = 0;
	temp = (unsigned char *)ptr;
	while (i < n)
	{
		if (temp[i] == (unsigned char)ch)
			return ((void *)(temp + i));
		i++;
	}
	return (NULL);
}
