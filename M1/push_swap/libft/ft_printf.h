/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 14:30:12 by danipere          #+#    #+#             */
/*   Updated: 2026/07/03 13:55:06 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"

int	ft_printf(char const *str, ...);
int	ft_print_free(char *st, int fd);
int	ft_print_mem(unsigned long mem);

#endif
