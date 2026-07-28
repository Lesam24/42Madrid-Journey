/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:56:11 by danipere          #+#    #+#             */
/*   Updated: 2026/07/03 17:38:08 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_free(char *st, int fd)
{
	int	i;

	i = 0;
	while (st[i])
	{
		ft_putchar_fd(st[i], fd);
		i++;
	}
	free(st);
	return (i);
}

int	ft_print_mem(unsigned long mem)
{
	if (!mem)
		return (ft_putstr_fd("(nil)", 1));
	ft_putstr_fd("0x", 1);
	return (ft_print_free(ft_unbrbase(mem, BASE_HEX), 1) + 2);
}
