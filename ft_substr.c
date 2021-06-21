/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 12:50:36 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/09 08:23:43 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = ft_strlen((char*)s);
	if (start > i)
		start = i;
	if (i - start < len)
		j = i - start;
	else
		j = len;
	str = malloc(sizeof(char) * (j + 1));
	if (str)
		ft_strlcpy(str, s + start, j + 1);
	return (str);
}
