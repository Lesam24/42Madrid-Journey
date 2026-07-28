/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:09:07 by danipere          #+#    #+#             */
/*   Updated: 2026/07/06 18:38:40 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	search(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	j = 0;
	needle_len = ft_strlen((char *)needle);
	if (!*needle)
		return (False);
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (j == needle_len)
			return (True);
		else
			j = 0;
		i++;
	}
	return (False);
}

t_bool	search_array(char **haystack, char *needle)
{
	int	i;

	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle)
			return (True);
		i++;
	}
	return (False);
}
