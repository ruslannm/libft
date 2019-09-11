/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:12:28 by rgero             #+#    #+#             */
/*   Updated: 2019/09/11 15:15:07 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*s_tmp;

	i = 0;
	s_tmp = (char *)s;
	while (s_tmp[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s_tmp[i] == c)
			return (&s_tmp[i]);
		i--;
	}
	return (NULL);
}
