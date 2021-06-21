/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:22:59 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/03 09:32:02 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *d;
	char *s;

	d = (char*)dest;
	s = (char*)src;
	if (dest < src)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else if (src < dest)
	{
		d += len - 1;
		s += len - 1;
		while (len--)
		{
			*d-- = *s--;
		}
	}
	return (dest);
}
