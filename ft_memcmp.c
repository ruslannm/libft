/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:08:05 by rgero             #+#    #+#             */
/*   Updated: 2019/09/09 19:06:33 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char*)s1;
	c2 = (unsigned char*)s2;
	i = 0;
	while (c1[i] != '\0' && c2[i] != '\0' && c1[i] == c2[i])
		if (i < n - 1)
			i++;
		else
			return (c1[i] - c2[i]);
	return (c1[i] - c2[i]);
}
