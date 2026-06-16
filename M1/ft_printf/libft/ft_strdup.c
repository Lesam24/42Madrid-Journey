/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:36:02 by samsanch          #+#    #+#             */
/*   Updated: 2026/05/25 10:36:03 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*temp;
	size_t	i;
	size_t	size;

	size = ft_strlen(src);
	temp = (char *)malloc((size + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	i = 0;
	while (i < size)
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
