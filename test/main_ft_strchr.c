/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:18:06 by rgero             #+#    #+#             */
/*   Updated: 2019/09/11 15:08:34 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char s1[3][15] = {"0123456789012","0123456","1"};
	int	n[4] = {50, 57, 32, 0};
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
			ft_putstr(";lb strchr:");
			if (strchr(s1[i], n[j]))
				ft_putstr(strchr(s1[i], n[j]));
			else
				ft_putstr("NULL");
			ft_putstr(";my strchr:");
			if (ft_strchr(s1[i], n[j]))
	              ft_putstr(ft_strchr(s1[i], n[j]));
            else
               ft_putstr("NULL");
			ft_putstr(";\n");
			j++;
		}
		i++;
	}
	return 0;
}
