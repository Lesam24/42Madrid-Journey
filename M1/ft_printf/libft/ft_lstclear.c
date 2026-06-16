/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:20:54 by samsanch          #+#    #+#             */
/*   Updated: 2026/05/29 18:20:55 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*temp;

	if (!lst || !del)
		return ;
	lst_new = *lst;
	if (!*lst)
		return ;
	while (lst_new)
	{
		temp = lst_new;
		lst_new = lst_new->next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}
