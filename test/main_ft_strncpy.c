/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:05:55 by rgero             #+#    #+#             */
/*   Updated: 2019/09/10 18:28:44 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		main(void)
{
	char s1[3][11] = {"0123456789","1234",""};
	char s2[3][11] = {"aaaaaaaaaa","bbbbbbbbb",""};
/*    char s3[3][11] = {"aaaaaaaaaa","bbbbbbbbb",""};*/
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
			ft_putstr(";lb strncpy:");
			ft_putstr(strncpy(s2[i], s1[i], n[j]));
			ft_putstr(";my strncpy:");
/*            ft_putstr(ft_strncpy(s3[i], s1[i], n[j]));*/
			ft_putstr(";\n");
			j++;
		}
		i++;
	}
	return 0;
}
