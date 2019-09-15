/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:14:59 by rgero             #+#    #+#             */
/*   Updated: 2019/09/14 12:47:46 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		main(void)
{
	unsigned char s1[3][11] = {"0123456789","123456789","a"};
	unsigned char s2[3][11] = {"0123456789","123406789",""};
	size_t	n[4] = {10, 5, 1, 0};
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		ft_putstr("s1:");
		ft_putstr((char *)s1[i]);
	    ft_putstr("-\n");
        ft_putstr("s2:");
        ft_putstr((char *)s2[i]);
        ft_putstr("-\n");
		j = 0;
		while (j < 4)
		{
			ft_putstr("n=");
			ft_putnbr(n[j]);
			ft_putstr(";lb memcmp:");
			ft_putnbr(memcmp(s1[i], s2[i], n[j]));
			ft_putstr(";my memcmp:");
            ft_putnbr(ft_memcmp(s1[i], s2[i], n[j]));
			ft_putstr(";\n");
			j++;
		}
		i++;
	}
	return 0;
}
