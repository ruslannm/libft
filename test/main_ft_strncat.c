/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:05:55 by rgero             #+#    #+#             */
/*   Updated: 2019/09/10 19:00:10 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		main(void)
{
	char s1[3][11] = {"01","34","1"};
	char s2[3][11] = {"aa","bb",""};
    char s3[3][11] = {"aa","bb",""};
	size_t	n[4] = {10, 5, 1, 0};
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
			ft_putstr("n=");
			ft_putnbr(n[j]);
			ft_putstr(";lb strnicat:");
			ft_putstr(strncat(s2[i], s1[i], n[j]));
			ft_putstr(";my strncat:");
            ft_putstr(ft_strncat(s3[i], s1[i], n[j]));
			ft_putstr(";\n");
			j++;
		}
		i++;
	}
	return 0;
}
