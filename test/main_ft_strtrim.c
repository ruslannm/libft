/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:40:24 by rgero             #+#    #+#             */
/*   Updated: 2019/09/15 12:33:23 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	    char *s1 = "  \t \t \n   \n\n\n\t";
		ft_putstr("s1:");
		ft_putstr(s1);
	    ft_putstr("-\nNew=");
		ft_putstr(ft_strtrim(s1));
			ft_putstr("=New;\n");
	return 0;
}
