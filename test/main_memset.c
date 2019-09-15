/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:30:17 by rgero             #+#    #+#             */
/*   Updated: 2019/09/08 13:43:07 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t n);

int main (void)
{
	unsigned char src[15]="1234567890";
    unsigned char src2[15]="1234567890";
	memset(src, '1', 10);
	printf("lib c src: %s\n",src);
	printf("li2 c src: %s\n", ft_memset (src2, '1', 10));
    printf ("my lib c src: %s\n",src2);
	return (0);
}
