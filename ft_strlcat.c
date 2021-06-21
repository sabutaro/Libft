/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 14:53:17 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/08 12:57:11 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t len_dest;

	i = 0;
	j = 0;
	len_dest = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	if (size != 0 && size >= len_dest)
		dest[i] = '\0';
	if (size < len_dest)
		return (ft_strlen((char*)src) + size);
	else
		return (ft_strlen((char*)src) + len_dest);
}
