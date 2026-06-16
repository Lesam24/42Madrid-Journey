/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 00:03:07 by samsanch          #+#    #+#             */
/*   Updated: 2026/05/29 00:03:08 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_new;

	if (!new || !lst)
		return ;
	lst_new = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (lst_new->next)
		lst_new = lst_new->next;
	lst_new->next = new;
}
