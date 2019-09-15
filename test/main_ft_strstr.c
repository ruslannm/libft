/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:40:24 by rgero             #+#    #+#             */
/*   Updated: 2019/09/11 15:50:13 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char s1[3][15] = {"01239456789012","01234256","1"};
	char s2[4][5] = {"67", "789", "1", ""};
	int i;
	int j;

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
			if (strstr(s1[i], s2[j]))
				ft_putstr(strstr(s1[i], s2[j]));
			else
				ft_putstr("NULL");
			ft_putstr(";my strrchr:");
			if (ft_strstr(s1[i], s2[j]))
	              ft_putstr(ft_strstr(s1[i], s2[j]));
            else
               ft_putstr("NULL");
			ft_putstr(";\n");
			j++;
		}
		i++;
	}
	return 0;
}
