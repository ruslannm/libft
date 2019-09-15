/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:14:21 by rgero             #+#    #+#             */
/*   Updated: 2019/09/14 14:53:14 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  //Для printf
#include <string.h>   //Для memccpy

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

int main (void)
{
	unsigned char src[100]="abc\220de";
	unsigned char sr2[100]="abc\220de";
	unsigned char dst[100]="11111";
    unsigned char ds2[100]="11111";


	char *s1 = memccpy (dst, src,'\220', 50);
	printf ("dst:%s-\n", s1);
    char *s2 = ft_memccpy (ds2, sr2,'\220', 50);
	printf ("ds2:%s-\n",  s2);
	return 0;
}
