/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:45:55 by rgero             #+#    #+#             */
/*   Updated: 2019/09/10 18:17:32 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		null_term;

	i = 0;
	null_term = 1;
	while (i < len)
	{
		if (src[i] != '\0' && null_term)
			dst[i] = src[i];
		else
		{
			dst[i] = '\0';
			null_term = 0;
		}
		i++;
	}
	return (dst);
}
