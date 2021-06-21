/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 15:37:32 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/03 09:28:45 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;
	t_list *p;

	if (!*lst || !del)
		return ;
	p = *lst;
	while (p != NULL)
	{
		tmp = p->next;
		ft_lstdelone(p, del);
		p = tmp;
	}
	*lst = NULL;
}
