/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:37:17 by rgero             #+#    #+#             */
/*   Updated: 2019/09/15 18:03:41 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
    char *s1 = "      split       this for   me  !      ";
	char **d1;
	int i;	

	i = 0;
	        ft_putstr("s1:");
			        ft_putstr(s1);
	d1 = ft_strsplit(s1, ' ');
	while (d1[i])
	{	
	    ft_putstr("\nNew=");
		ft_putstr(d1[i]);
			ft_putstr("=New;\n");
			i++;
	} 
			return 0;
}
