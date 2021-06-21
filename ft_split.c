/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 13:00:57 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/09 08:24:14 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	count;
	size_t	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (word == 1 && *s == c)
			word = 0;
		if (word == 0 && *s != c)
		{
			word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static void		free_ret(char **ret, size_t i)
{
	while (i >= 0)
		free(&ret[i--]);
	free(ret);
}

char			**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	nb_words;
	size_t	word;

	word = 0;
	if (s == NULL)
		return (NULL);
	nb_words = word_count(s, c);
	if (!(ret = (char **)malloc(sizeof(char *) * nb_words + 1)))
		return (NULL);
	while (nb_words--)
	{
		while (*s == c && *s != '\0')
			s++;
		ret[word] = ft_substr(s, 0, word_len(s, c));
		if (ret[word] == NULL)
		{
			free_ret(ret, word);
			return (NULL);
		}
		s = s + word_len(s, c);
		word++;
	}
	ret[word] = NULL;
	return (ret);
}
