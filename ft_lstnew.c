/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 11:16:44 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/03 09:28:50 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *r;

	r = (t_list*)malloc(sizeof(t_list) * (1));
	if (r == NULL)
		return (NULL);
	r->content = content;
	r->next = 0;
	return (r);
}
