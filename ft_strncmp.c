/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:59:04 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/03 09:32:29 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while ((unsigned char)s1[i] == (unsigned char)s2[i] &&
		(unsigned char)s1[i] != '\0' &&
		(unsigned char)s2[i] != '\0' && i < n - 1)
		{
			i++;
		}
	}
	else
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
