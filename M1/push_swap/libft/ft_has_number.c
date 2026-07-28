/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:57:09 by danipere          #+#    #+#             */
/*   Updated: 2026/07/06 14:59:28 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_has_number(long long haystack, long long needle)
{
	int	size;

	size = ft_intlen(needle);
	if (needle > haystack)
		return (False);
	if (needle < 0)
		needle = -needle;
	if (haystack < 0)
		haystack = -haystack;
	if (needle != haystack % 10 * size)
		ft_has_number(needle, haystack / 10);
	else
		return (True);
	return (False);
}
