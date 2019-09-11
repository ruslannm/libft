/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:37:31 by rgero             #+#    #+#             */
/*   Updated: 2019/09/11 15:00:32 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*s_tmp;

	i = 0;
	s_tmp = (char *)s;
	while (s_tmp[i] != '\0')
	{
		if (s_tmp[i] == c)
			return (&s_tmp[i]);
		i++;
	}
	if (c == '\0')
		return (&s_tmp[i]);
	return (NULL);
}
