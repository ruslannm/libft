/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:40:24 by rgero             #+#    #+#             */
/*   Updated: 2019/09/11 16:40:07 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char s1[3][15] = {"01239456789012","01234256","1"};
	char s2[4][5] = {"67", "789", "1", ""};
	int i;
	int j;
	size_t n;

	n = 10;
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
			ft_putstr(";lb strstr:");
			if (strnstr(s1[i], s2[j], n))
				ft_putstr(strnstr(s1[i], s2[j], n));
			else
				ft_putstr("NULL");
			ft_putstr(";my strrchr:");
			if (ft_strnstr(s1[i], s2[j], n))
	              ft_putstr(ft_strnstr(s1[i], s2[j], n));
            else
               ft_putstr("NULL");
			ft_putstr(";\n");
			j++;
		}
		i++;
	}
	return 0;
}
