/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:16:01 by rgero             #+#    #+#             */
/*   Updated: 2019/09/14 17:14:25 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		main(void)
{
	char s1[10][100] = {" 0125555555555555555555555555555555555555555555555*", "  +0125-", "-00125="," - 0123456711\0","01234256\0","+12589788899", "-0000092233720368547758012"};
	int i;
	size_t n;

	n = 2;
	i = 0;
	while (i < 7)
	{
		ft_putstr("s1:");
		ft_putstr(s1[i]);
	    ft_putstr("-\n");
		ft_putstr("n=");
	        ft_putstr(";lb atoi:");
			ft_putnbr(atoi(s1[i]));
			printf("printf:%d", atoi(s1[i]));
			ft_putstr(";my atoi:");
            ft_putnbr(ft_atoi(s1[i]));
            printf("printf:%d", ft_atoi(s1[i]));
			ft_putstr(";\n");
			i++;
	}
	return 0;
}
