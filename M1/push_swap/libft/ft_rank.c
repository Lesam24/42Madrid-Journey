/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rank.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 10:28:38 by danipere          #+#    #+#             */
/*   Updated: 2026/07/15 10:43:21 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_rank(int *array)
{
	int	i;
	int	j;
	int	size;
	int	pos;
	int	*result;

	size = 0;
	while (array[size] != -1)
		size++;
	result = malloc((size + 1) * sizeof(int));
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		pos = 1;
		j = -1;
		while (++j < size)
			if (array[j] < array[i])
				pos++;
		result[i] = pos;
		i++;
	}
	result[size] = -1;
	return (result);
}
