/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:06:30 by rgero             #+#    #+#             */
/*   Updated: 2019/09/13 16:58:36 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, \
		size_t n)
{
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;
	int				i;

	dst_tmp = (unsigned char *)dst;
	src_tmp = (unsigned char *)src;
	i = 0;
	while (n-- > 0)
	{
		dst_tmp[i] = src_tmp[i];
		if (dst_tmp[i] == c)
			return (dst_tmp + i + 1);
		i++;
	}
	return (NULL);
}
