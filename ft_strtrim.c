/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:41:46 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/03 09:32:33 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_count(s1[start], set))
		start++;
	end = ft_strlen((char*)s1);
	while (end > start && ft_count(s1[end - 1], set))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	i = 0;
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i++] = s1[start++];
	}
	str[i] = '\0';
	return (str);
}
