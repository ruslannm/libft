/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:29:45 by rgero             #+#    #+#             */
/*   Updated: 2019/09/08 16:04:15 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int		main (void)
{
	unsigned char dst[11];
	unsigned char dst2[5];
	
	unsigned char src[15]="1234567890";
    unsigned char src2[15]="1234567890";


	memcpy(dst, src, 11);
	printf("lib c src:%s-\n",dst);
	printf("li2 c src:%s-\n", ft_memcpy (dst2, src2, 11));
    printf ("my lib c src:%s-\n",dst2);
	return (0);
}
