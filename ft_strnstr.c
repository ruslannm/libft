/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:57:13 by rgero             #+#    #+#             */
/*   Updated: 2019/09/13 18:35:42 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n_len;

	if (!(n_len = ft_strlen(needle)))
		return ((char *)haystack);
	if (n_len > len)
		n_len = len;
	i = 0;
	while (*haystack && i <= len - n_len)
	{
		if ((*haystack == *needle) && 
				(ft_strncmp(haystack, needle, len) == 0))
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
