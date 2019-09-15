/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:28:22 by rgero             #+#    #+#             */
/*   Updated: 2019/09/10 17:51:27 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		main(void)
{
	char s1[3][11] = {"0123456789","abc",""};
	char **s2;
	int i;

	s2 = (void *)0;
	i = 0;
	while (i < 3)
	{
		ft_putstr("s1:");
		ft_putstr((char *)s1[i]);
	    ft_putstr("-\n");
		ft_putstr(";lb memcmp:");
		ft_putstr(strdup(s1[i]));
		ft_putstr(";my memcmp:");
		ft_putstr(ft_strdup(s1[i]));
		ft_putstr(";\n");

		i++;
	}
	return 0;
}
