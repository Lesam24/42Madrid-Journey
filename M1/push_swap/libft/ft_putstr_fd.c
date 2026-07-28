/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 02:23:02 by danipere          #+#    #+#             */
/*   Updated: 2026/07/01 14:20:20 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int		i;
	char	*ptr;
	char	*nul;

	i = -1;
	nul = "(null)";
	if (!s)
		ptr = nul;
	else
		ptr = s;
	while (ptr[++i])
		ft_putchar_fd(ptr[i], fd);
	return (i);
}
