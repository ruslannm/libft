/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:57:13 by rgero             #+#    #+#             */
/*   Updated: 2019/09/11 16:45:41 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h_tmp;
	char	*n_tmp;
	size_t	i;
	size_t	j;
	size_t	n_len;

	h_tmp = (char *)haystack;
	n_tmp = (char *)needle;
	if (!(n_len = ft_strlen(n_tmp)))
		return (&h_tmp[0]);
	if (n_len > len)
		n_len = len;
	i = 0;
	while (h_tmp[i] != '\0' && i <= len - n_len)
	{
		j = 0;
		while (h_tmp[i + j] == n_tmp[j])
		{
			j++;
			if (n_tmp[j] == '\0')
				return (&h_tmp[i]);
		}
		i++;
	}
	return (NULL);
}
