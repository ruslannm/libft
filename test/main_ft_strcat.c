/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:37:55 by rgero             #+#    #+#             */
/*   Updated: 2019/09/10 18:43:51 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		main(void)
{
	char s1[3][11] = {"0123","45678","99"};
	char s2[3][11] = {"aaa","bbbb",""};
    char s3[3][11] = {"aaa","bbbb",""};
	int i;

	i = 0;
	while (i < 3)
	{
		ft_putstr("s1:");
		ft_putstr((char *)s1[i]);
	    ft_putstr("-\n");
			ft_putstr(";lb strncpy:");
			ft_putstr(strcat(s2[i], s1[i]));
			ft_putstr(";my strncpy:");
            ft_putstr(ft_strcat(s3[i], s1[i]));
			ft_putstr(";\n");
		i++;
	}
	return 0;
}
