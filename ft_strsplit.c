/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:11:36 by rgero             #+#    #+#             */
/*   Updated: 2019/09/15 15:34:11 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_strlenc(const char *s, char c)
{
	size_t	ret;

	while (*s != '\0' && *s == c)
		s++;
	ret = 0;
	while (!(*s == '\0' || *s == c))
	{
		ret++;
		s++;
	}
	return (ret);
}

static int		ft_count_words(const char *s, char c)
{
	int	ret;

	ret = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		while (*s != c && *s)
			s++;
		ret++;
		while (*s == c && *s)
			s++;
	}
	return (ret);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		i;
	int		nbr_words;
	size_t	size_word;

	if (!s)
		return (NULL);
	i = 0;
	nbr_words = ft_count_words(s, c);
	if (!(ret = (char **)malloc(sizeof(char) * (nbr_words  + 1))))
		return (NULL);
	while (i < nbr_words)
	{
		while (*s == c)
			s++;
		size_word = ft_strlenc(s, c);
		if (!(ret[i] = (char *)malloc(sizeof(char) * size_word)))
		{
			while (i > 0)
				free(ret[--i]);
			free(ret);
			return (NULL);
		}
		ft_strncpy(ret[i], s, size_word);
		i++;
	}
	ret[nbr_words] = NULL;
	return (ret);
}
