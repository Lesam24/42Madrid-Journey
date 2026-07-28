/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 22:32:02 by danipere          #+#    #+#             */
/*   Updated: 2026/07/06 14:41:07 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	j = 0;
	needle_len = ft_strlen((char *)needle);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i <= len)
	{
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (j == needle_len && i + j <= len)
			return ((char *)haystack + i);
		else
			j = 0;
		i++;
	}
	return (0);
}
