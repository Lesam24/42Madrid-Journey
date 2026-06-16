/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:06:11 by samsanch          #+#    #+#             */
/*   Updated: 2026/05/20 15:06:12 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] && dest_len < dest_size)
		dest_len++;
	while (src[src_len])
		src_len++;
	while (src[i] && (dest_len + i) < (dest_size - 1) && dest_size != 0)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if ((dest_len + i) < dest_size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
