/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:40:24 by rgero             #+#    #+#             */
/*   Updated: 2019/09/11 17:16:46 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char s1[3][9] = {"01234567\0","01234256\0","1\0"};
	char s2[3][9] = {"01234567\0", "789\0", "1\0"};
	int i;
	int j;
	size_t n;

	n = 2;
	i = 0;
	while (i < 3)
	{
		ft_putstr("s1:");
		ft_putstr(s1[i]);
	    ft_putstr("-\n");
		j = 0;
		while (j < 4)
		{
			ft_putstr("n=");
			ft_putstr(s2[j]);
	        ft_putstr(";lb strcmp:");
			ft_putnbr(strncmp(s1[i], s2[j], n));
			ft_putstr(";my strcmp:");
            ft_putnbr(ft_strncmp(s1[i], s2[j], n));
			ft_putstr(";\n");
			j++;
		}
		i++;
	}
	return 0;
}
