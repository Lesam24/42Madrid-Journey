/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 18:16:35 by danipere          #+#    #+#             */
/*   Updated: 2026/06/29 18:38:54 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*new;
	int		s1_len;
	int		s2_len;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!new)
		return (0);
	while (i < s1_len || i < s2_len)
	{
		if (i < s1_len)
			new[i] = s1[i];
		if (i < s2_len)
			new[i + s1_len] = s2[i];
		i++;
	}
	new[s1_len + s2_len] = 0;
	return (new);
}
