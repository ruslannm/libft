/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:18:06 by rgero             #+#    #+#             */
/*   Updated: 2019/09/11 14:19:42 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		main(void)
{
	char s1[3][15] = {"0123456789012","0123456","1"};
	char s2[3][5];
    char s3[3][5];
	size_t	n[4] = {15, 5, 1, 0};
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		ft_putstr("s1:");
		ft_putstr((char *)s1[i]);
	    ft_putstr("-\n");
		j = 0;
		while (j < 4)
		{
			 s2[i][0] = 'a';
	         s3[i][0] = 'a';
	         s2[i][1] = '\0';
	         s3[i][1] = '\0';
			ft_putstr("n=");
			ft_putnbr(n[j]);
			ft_putstr(";lb strlcat:");
			ft_putnbr((int)strlcat(s2[i], s1[i], n[j]));
			ft_putstr(";s2 new=");
			ft_putstr(s2[i]);
			ft_putstr(";my strncat:");
            ft_putnbr((int)ft_strlcat(s3[i], s1[i], n[j]));
            ft_putstr(";s3 new=");
			ft_putstr(s3[i]);
			ft_putstr(";\n");
			j++;
		}
		i++;
	}
	return 0;
}
