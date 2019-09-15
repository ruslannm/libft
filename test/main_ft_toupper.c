/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:40:24 by rgero             #+#    #+#             */
/*   Updated: 2019/09/11 19:22:13 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(void)
{
	char *s1 = "abcdefghijklmnoprstuvwxyzABCDEFGHIJKLMNOPRSTUVWXYZ123456789?\0";
	int i;

	size_t n;

	n = 2;
	i = 0;
	while (s1[i] != '\0')
	{
		ft_putstr("s1:");
		ft_putchar(s1[i]);

	        ft_putstr(";lb toupper:");
			ft_putchar(toupper(s1[i]));
			ft_putstr(";my toupper:");
            ft_putchar(ft_toupper(s1[i]));
			ft_putstr(";\n");
		i++;
	}
	return 0;
}
