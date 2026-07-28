/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:00:06 by danipere          #+#    #+#             */
/*   Updated: 2026/06/30 15:32:03 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreverse(char *str)
{
	char	tmp;
	int		i;
	int		str_len;

	i = -1;
	str_len = ft_strlen(str);
	while (++i < str_len / 2)
	{
		tmp = str[i];
		str[i] = str[str_len - (i + 1)];
		str[str_len - (i + 1)] = tmp;
	}
	return (str);
}
