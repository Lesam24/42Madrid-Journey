/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:06:52 by samsanch          #+#    #+#             */
/*   Updated: 2026/05/20 15:06:53 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	const char	*end;

	end = str;
	while (*end)
		end++;
	while (end >= str)
	{
		if (*end == (char)ch)
			return ((char *)end);
		end--;
	}
	return (NULL);
}
