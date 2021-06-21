/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:09:26 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/03 09:31:59 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char		*ssrc;
	unsigned char	*dest;

	dest = dst;
	ssrc = src;
	if (dst == src)
		return (dst);
	while (n-- > 0)
		*dest++ = *ssrc++;
	return (dst);
}
