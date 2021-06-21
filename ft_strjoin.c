/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:33:16 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/03 09:32:21 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*src;
	size_t	i;
	int		j;

	if (s1 == NULL)
		return (NULL);
	src = (char*)malloc(sizeof(char*) * (ft_strlen((char*)s1)
		+ ft_strlen((char*)s2)) + 1);
	if (!src)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		src[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		src[j++] = s2[i];
		i++;
	}
	src[j] = 0;
	return (src);
}
