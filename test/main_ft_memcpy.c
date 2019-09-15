/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:29:45 by rgero             #+#    #+#             */
/*   Updated: 2019/09/15 10:48:13 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int		main (void)
{
/*	unsigned char dst[100] = "";*/
/*	unsigned char dst2[100] = "";*/
	
/*	unsigned char src[15]=NULL;*/
/*    unsigned char src2[15]=NULL;*/

	printf("lib c src:%s-\n", memcpy(((void *)0), ((void *)0), 3));
	printf("li2 c src:%s-\n", ft_memcpy (((void *)0), ((void *)0), 3)); 
 
	return (0);
}
