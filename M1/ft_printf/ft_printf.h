/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 12:03:30 by samsanch          #+#    #+#             */
/*   Updated: 2026/06/05 12:03:35 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(char const *format, ...);
int		ft_print_char(char c);
int		ft_print_string(char *str);
int		ft_print_num(int nb);
int		ft_print_unsigned_num(unsigned int nb);
char	ft_hex_lower(unsigned int nb);
char	ft_hex_upper(unsigned int nb);
int		ft_print_hex_pointer(unsigned long nb);
int		ft_print_pointer(void *ptr);
int		ft_print_hexlower(unsigned int nb);
int		ft_print_hexupper(unsigned int nb);

#endif
