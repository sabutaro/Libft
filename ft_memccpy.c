/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:59:41 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/03 09:31:49 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		*(unsigned char*)dest++ = *(unsigned char*)src;
		if (*(unsigned char*)src == (unsigned char)c)
			return (dest);
		src++;
	}
	return (NULL);
}
