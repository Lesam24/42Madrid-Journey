/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 01:01:53 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/28 02:03:33 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

void	ft_copy(char *dest, char *src, unsigned int size)
{
	if (*src == '\0' || size <= 1)
	{
		*dest = 0;
		return ;
	}
	*dest = *src;
	ft_copy(dest + 1, src + 1, size - 1);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (size + s_len);
	ft_copy(dest + d_len, src, size - d_len);
	return (d_len + s_len);
}

/* Test Function
#include <stdio.h>
int	main(void)
{
	char dest[20] = "Hola";
	char *src = " Mundo";
	unsigned int size = 2;
	ft_strlcat(dest, src, size);
	printf("%s\n", dest);
} */
