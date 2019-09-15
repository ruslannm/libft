/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:53:58 by rgero             #+#    #+#             */
/*   Updated: 2019/09/10 18:02:08 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		main(void)
{
	char s1[3][11] = {"0123456789","123456789",""};
	char s2[3][11] = {"aaaaaaaaaa","bbbbbbbbb","bb"};
    char s3[3][11] = {"aaaaaaaaaa","bbbbbbbbb","bb"};
	int i;

	i = 0;
	while (i < 3)
	{
		ft_putstr("s1:");
		ft_putstr((char *)s1[i]);
	    ft_putstr("-\n");
		ft_putstr("n=");
		ft_putstr(";lb strcpy:");
		ft_putstr(strcpy(s2[i], s1[i]));
		ft_putstr(";my strcpy:");
        ft_putstr(ft_strcpy(s3[i], s1[i]));
		ft_putstr(";\n");
		i++;
	}
	return 0;
}
