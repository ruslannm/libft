/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:04:12 by rgero             #+#    #+#             */
/*   Updated: 2019/09/08 14:14:50 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_bzero(void *b, size_t n);

int main (void)
{
	unsigned char src[15]="1234567890";
    unsigned char src2[15]="1234567890";
	bzero(src, 10);
	printf("lib c src:%s-\n",src);
	ft_bzero(src2, 10);
    printf ("my lib c src:%s-\n",src2);
	return (0);
}
